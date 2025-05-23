/-
Copyright (c) 2021 Joscha Mennicken. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Authors: Joscha Mennicken
-/
prelude
import Lean.Data.Lsp.Internal
import Lean.Server.Utils
import Std.Data.TreeMap

/-! # Representing collected and deduplicated definitions and usages -/

set_option linter.missingDocs true

namespace Lean.Server
open Lsp Lean.Elab Std

/--
Global reference. Used by the language server to figure out which identifiers refer to which
other identifiers across the whole project.
-/
structure Reference where
  /-- Identifier of this reference. -/
  ident    : RefIdent
  /-- Identifiers that are logically identical to this reference. -/
  aliases  : Array RefIdent := #[]
  /-- Range where this reference occurs. -/
  range    : Lsp.Range
  /-- Syntax of this reference. -/
  stx      : Syntax
  /-- `ContextInfo` at the point of elaboration of this reference. -/
  ci       : ContextInfo
  /-- Additional `InfoTree` information for this reference. -/
  info     : Info
  /-- Whether this reference declares `ident`. -/
  isBinder : Bool

/-- Definition and usages of an identifier within a single module. -/
structure RefInfo where
  /--
  Definition `Reference` of the identifier.
  Is equal to `none` if e.g. the definition is outside of the module where this `RefInfo` is used.
  -/
  definition : Option Reference
  /-- All usage `Reference`s of the identifier in a single module. -/
  usages     : Array Reference

namespace RefInfo

/-- No definition, no usages. -/
def empty : RefInfo := ⟨none, #[]⟩

/--
Adds `ref` to `i`.
If `i` has no `definition` and `ref` is a declaration, it becomes the `definition`.
If `i` already has a `definition` and `ref` is also a declaration, it is not added to `i`.
Otherwise, `ref` is added to `i.usages`.
-/
def addRef (i : RefInfo) (ref : Reference) : RefInfo :=
  match i, ref with
  | { definition := none, .. }, { isBinder := true, .. } =>
    { i with definition := ref }
  | { definition := some .., .. }, { isBinder := true, .. } =>
    i
  | { usages, .. }, { isBinder := false, .. } =>
    { i with usages := usages.push ref }

/-- Converts `i` to a JSON-serializable `Lsp.RefInfo`. -/
def toLspRefInfo (i : RefInfo) : BaseIO Lsp.RefInfo := do
  let refToRefInfoLocation (ref : Reference) : BaseIO RefInfo.Location := do
    let parentDeclName? := ref.ci.parentDecl?
    let .ok parentDeclRanges? ← EIO.toBaseIO <| ref.ci.runCoreM do
        let some parentDeclName := parentDeclName?
          | return none
        findDeclarationRanges? parentDeclName
      -- we only use `CoreM` to get access to a `MonadEnv`, but these are currently all `IO`
      | unreachable!
    return {
      range := ref.range
      parentDecl? := do
        let parentDeclName ← parentDeclName?
        let parentDeclRange := (← parentDeclRanges?).range.toLspRange
        let parentDeclSelectionRange := (← parentDeclRanges?).selectionRange.toLspRange
        return ⟨parentDeclName.toString, parentDeclRange, parentDeclSelectionRange⟩
    }
  let definition? ← i.definition.mapM refToRefInfoLocation
  let usages ← i.usages.mapM refToRefInfoLocation
  return {
    definition? := definition?
    usages := usages
  }

end RefInfo

/-- All references from within a module for all identifiers used in a single module. -/
abbrev ModuleRefs := Std.TreeMap RefIdent RefInfo

namespace ModuleRefs

/-- Adds `ref` to the `RefInfo` corresponding to `ref.ident` in `self`. See `RefInfo.addRef`. -/
def addRef (self : ModuleRefs) (ref : Reference) : ModuleRefs :=
  let refInfo := self.getD ref.ident RefInfo.empty
  self.insert ref.ident (refInfo.addRef ref)

/-- Converts `refs` to a JSON-serializable `Lsp.ModuleRefs`. -/
def toLspModuleRefs (refs : ModuleRefs) : BaseIO Lsp.ModuleRefs := do
  let mut refs' := ∅
  for (k, v) in refs do
    refs' := refs'.insert k (← v.toLspRefInfo)
  return refs'

end ModuleRefs

end Lean.Server

namespace Lean.Lsp.RefInfo
open Server

/-- No definition, no usages -/
def empty : RefInfo := ⟨ none, #[] ⟩

/-- Combines the `usages` of `a` and `b` and prefers the `definition?` of `b` over that of `a`. -/
def merge (a : RefInfo) (b : RefInfo) : RefInfo where
  definition? := b.definition?.orElse fun _ => a.definition?
  usages      := a.usages.append b.usages

/--
Finds the first definition or usage in `self` where the `RefInfo.Location.range`
contains the given `pos`. The `includeStop` parameter can be used to toggle between closed-interval
and half-open-interval behavior for the range. Closed-interval behavior matches the expectation of
VSCode when selecting an identifier at a cursor position (see #767).
-/
def findReferenceLocation?
    (self        : RefInfo)
    (pos         : Lsp.Position)
    (includeStop : Bool := false)
    : Option Location := do
  if let some loc := self.definition? then
    if contains loc.range pos then
      return loc
  for loc in self.usages do
    if contains loc.range pos then
      return loc
  none
where
  contains (range : Lsp.Range) (pos : Lsp.Position) : Bool :=
    range.start <= pos && (if includeStop then pos <= range.end else pos < range.end)

/-- Checks whether any of the ranges in `self.definition?` or `self.usages` contains `pos`. -/
def contains (self : RefInfo) (pos : Lsp.Position) (includeStop := false) : Bool := Id.run do
  (self.findReferenceLocation? pos includeStop).isSome

end Lean.Lsp.RefInfo

namespace Lean.Lsp.ModuleRefs
open Server

/--
Find all identifiers in `self` with a reference in this module that contains `pos` in its range.
-/
def findAt
    (self        : ModuleRefs)
    (pos         : Lsp.Position)
    (includeStop := false)
    : Array RefIdent := Id.run do
  let mut result := #[]
  for (ident, info) in self do
    if info.contains pos includeStop then
      result := result.push ident
  result

/-- Finds the first range in `self` that contains `pos`. -/
def findRange? (self : ModuleRefs) (pos : Lsp.Position) (includeStop := false) : Option Range := do
  for (_, info) in self do
    if let some loc := info.findReferenceLocation? pos includeStop then
      return loc.range
  none

end Lean.Lsp.ModuleRefs

namespace Lean.Server
open IO
open Lsp
open Elab

/-- Content of individual `.ilean` files -/
structure Ilean where
  /-- Version number of the ilean format. -/
  version    : Nat := 3
  /-- Name of the module that this ilean data has been collected for. -/
  module     : Name
  /-- All references of this module. -/
  references : Lsp.ModuleRefs
  deriving FromJson, ToJson

namespace Ilean

/-- Reads and parses the .ilean file at `path`. -/
def load (path : System.FilePath) : IO Ilean := do
  let content ← FS.readFile path
  match Json.parse content >>= fromJson? with
    | Except.ok ilean => pure ilean
    | Except.error msg => throwServerError s!"Failed to load ilean at {path}: {msg}"

end Ilean
/-! # Collecting and deduplicating definitions and usages -/

/-- Gets the name of the module that contains `declName`. -/
def getModuleContainingDecl? (env : Environment) (declName : Name) : Option Name := do
  let some modIdx := env.getModuleIdxFor? declName
    | env.header.mainModule
  env.allImportedModuleNames[modIdx]?

/--
Determines the `RefIdent` for the `Info` `i` of an identifier in `module` and
whether it is a declaration.
-/
def identOf (ci : ContextInfo) (i : Info) : Option (RefIdent × Bool) := do
  match i with
  | Info.ofTermInfo ti => match ti.expr with
    | Expr.const n .. =>
      some (RefIdent.const (← getModuleContainingDecl? ci.env n).toString n.toString, ti.isBinder)
    | Expr.fvar id =>
      some (RefIdent.fvar ci.env.header.mainModule.toString id.name.toString, ti.isBinder)
    | _ => none
  | Info.ofFieldInfo fi =>
    some (RefIdent.const (← getModuleContainingDecl? ci.env fi.projName).toString fi.projName.toString, false)
  | Info.ofOptionInfo oi =>
    some (RefIdent.const (← getModuleContainingDecl? ci.env oi.declName).toString oi.declName.toString, false)
  | _ => none

/-- Finds all references in `trees`. -/
def findReferences (text : FileMap) (trees : Array InfoTree) : Array Reference :=
  Id.run <| StateT.run' (s := #[]) do
    for tree in trees do
      tree.visitM' (postNode := fun ci info _ => do
        let some (ident, isBinder) := identOf ci info
          | return
        let some range := info.range?
          | return
        if info.stx.getHeadInfo matches .original .. then  -- we are not interested in canonical syntax here
          modify (·.push { ident, range := range.toLspRange text, stx := info.stx, ci, info, isBinder }))
    get

/--
There are several different identifiers that should be considered equal for the purpose of finding
all references of an identifier:
- `FVarId`s of a function parameter in the function's signature and body
- Chains of helper definitions like those created for do-reassignment `x := e`
- Overlapping definitions like those defined by `where` declarations that define both an FVar
  (for local usage) and a constant (for non-local usage)
- Identifiers connected by `FVarAliasInfo` such as variables before and after `match` generalization

In the first three cases that are not explicitly denoted as aliases with an `FVarAliasInfo`, the
corresponding `Reference`s have the exact same range.
This function finds all definitions that have the exact same range as another definition or usage
and collapses them into a single identifier. It also collapses identifiers connected by
an `FVarAliasInfo`.
When collapsing identifiers, it prefers using a `RefIdent.const name` over a `RefIdent.fvar id` for
all identifiers that are being collapsed into one.
-/
partial def combineIdents (trees : Array InfoTree) (refs : Array Reference) : Array Reference := Id.run do
  -- Deduplicate definitions based on their exact range
  let mut posMap : Std.HashMap Lsp.Range RefIdent := ∅
  for ref in refs do
    if let { ident, range, isBinder := true, .. } := ref then
      posMap := posMap.insert range ident

  let idMap := useConstRepresentatives <| buildIdMap posMap

  let mut refs' := #[]
  for ref in refs do
    let id := ref.ident
    if idMap.contains id then
      refs' := refs'.push { ref with ident := findCanonicalRepresentative idMap id, aliases := #[id] }
    else if !idMap.contains id then
      refs' := refs'.push ref
  refs'
where
  useConstRepresentatives (idMap : Std.HashMap RefIdent RefIdent)
      : Std.HashMap RefIdent RefIdent := Id.run do
    let insertIntoClass classesById id :=
      let representative := findCanonicalRepresentative idMap id
      let «class»     := classesById.getD representative ∅
      let classesById := classesById.erase representative -- make `«class»` referentially unique
      let «class»     := «class».insert id
      classesById.insert representative «class»

    -- collect equivalence classes
    let mut classesById : Std.HashMap RefIdent (Std.HashSet RefIdent) := ∅
    for ⟨id, baseId⟩ in idMap do
      classesById := insertIntoClass classesById id
      classesById := insertIntoClass classesById baseId

    let mut r := ∅
    for ⟨currentRepresentative, «class»⟩ in classesById do
      -- find best representative (ideally a const if available)
      let mut bestRepresentative := currentRepresentative
      for id in «class» do
        bestRepresentative :=
          match bestRepresentative, id with
          | .fvar ma a,  .fvar ..  => .fvar ma a
          | .fvar ..,  .const mb b => .const mb b
          | .const ma a, .fvar ..  => .const ma a
          | .const ma a, .const .. => .const ma a

      -- compress `idMap` so that all identifiers in a class point to the best representative
      for id in «class» do
        if id != bestRepresentative then
          r := r.insert id bestRepresentative
    return r

  findCanonicalRepresentative (idMap : Std.HashMap RefIdent RefIdent) (id : RefIdent) : RefIdent := Id.run do
    let mut canonicalRepresentative := id
    while h : idMap.contains canonicalRepresentative do
      canonicalRepresentative := idMap[canonicalRepresentative]
    return canonicalRepresentative

  buildIdMap posMap := Id.run <| StateT.run' (s := ∅) do
    -- map fvar defs to overlapping fvar defs/uses
    for ref in refs do
      let baseId := ref.ident
      if let some id := posMap[ref.range]? then
        insertIdMap id baseId

    -- apply `FVarAliasInfo`
    trees.forM (·.visitM' (postNode := fun ci info _ => do
      if let .ofFVarAliasInfo ai := info then
        -- FVars can only be aliases of FVars of the same file / module
        let mod := ci.env.header.mainModule
        insertIdMap (.fvar mod.toString ai.id.name.toString) (.fvar mod.toString ai.baseId.name.toString)))

    get

  -- poor man's union-find; see also `findCanonicalBinder`
  insertIdMap id baseId := do
    let idMap ← get
    let id := findCanonicalRepresentative idMap id
    let baseId := findCanonicalRepresentative idMap baseId
    if baseId != id then
      modify (·.insert id baseId)

/--
Groups `refs` by identifier and range s.t. references with the same identifier and range
are added to the `aliases` of the representative of the group.
Yields to separate groups for declaration and usages if `allowSimultaneousBinderUse` is set.
-/
def dedupReferences (refs : Array Reference) (allowSimultaneousBinderUse := false) : Array Reference := Id.run do
  let mut refsByIdAndRange : Std.HashMap (RefIdent × Option Bool × Lsp.Range) Reference := ∅
  for ref in refs do
    let isBinder := if allowSimultaneousBinderUse then some ref.isBinder else none
    let key := (ref.ident, isBinder, ref.range)
    refsByIdAndRange := match refsByIdAndRange[key]? with
      | some ref' => refsByIdAndRange.insert key { ref' with aliases := ref'.aliases ++ ref.aliases }
      | none => refsByIdAndRange.insert key ref

  let dedupedRefs := refsByIdAndRange.fold (init := #[]) fun refs _ ref => refs.push ref
  return dedupedRefs.qsort (·.range < ·.range)

/--
Finds all references in `trees` and deduplicates the result.
See `dedupReferences` and `combineIdents`.
-/
def findModuleRefs (text : FileMap) (trees : Array InfoTree) (localVars : Bool := true)
    (allowSimultaneousBinderUse := false) : ModuleRefs := Id.run do
  let mut refs :=
    dedupReferences (allowSimultaneousBinderUse := allowSimultaneousBinderUse) <|
    combineIdents trees <|
    findReferences text trees
  if !localVars then
    refs := refs.filter fun
      | { ident := RefIdent.fvar .., .. } => false
      | _ => true
  refs.foldl (init := Std.TreeMap.empty) fun m ref => m.addRef ref

/-! # Collecting and maintaining reference info from different sources -/

/-- Reference information from a loaded ILean file. -/
structure LoadedILean where
  /-- URI of the module of this ILean. -/
  moduleUri : DocumentUri
  /-- Path to the ILean file. -/
  ileanPath : System.FilePath
  /-- Reference information from this ILean. -/
  refs      : Lsp.ModuleRefs

/-- Paths and module references for every module name. Loaded from `.ilean` files. -/
abbrev ILeanMap := Std.TreeMap Name LoadedILean Name.quickCmp

/--
Transient reference information from a file worker.
We track this information so that we have up-to-date reference information before a file has been
built.
-/
structure TransientWorkerILean where
  /-- URI of the module that the file worker is associated with. -/
  moduleUri : DocumentUri
  /-- Document version for which these references have been collected. -/
  version   : Nat
  /-- References provided by the worker. -/
  refs      : Lsp.ModuleRefs

/--
Document versions and module references for every module name. Loaded from the current state
in a file worker.
-/
abbrev WorkerRefMap := Std.TreeMap Name TransientWorkerILean Name.quickCmp

/-- References from ilean files and current ilean information from file workers. -/
structure References where
  /-- References loaded from ilean files -/
  ileans : ILeanMap
  /-- References from workers, overriding the corresponding ilean files -/
  workers : WorkerRefMap

namespace References

/-- No ilean files, no information from workers. -/
def empty : References := { ileans := ∅, workers := ∅ }

/-- Adds the contents of an ilean file `ilean` at `path` to `self`. -/
def addIlean
    (self      : References)
    (moduleUri : DocumentUri)
    (path      : System.FilePath)
    (ilean     : Ilean)
    : References := { self with
  ileans := self.ileans.insert ilean.module {
    moduleUri
    ileanPath := path
    refs := ilean.references
  }
}

/-- Removes the ilean file data at `path` from `self`. -/
def removeIlean (self : References) (path : System.FilePath) : References :=
  let namesToRemove := self.ileans.filter (fun _ { ileanPath, .. } => ileanPath == path)
  namesToRemove.foldl (init := self) fun self name _ =>
    { self with ileans := self.ileans.erase name }

/--
Updates the worker references in `self` with the `refs` of the worker managing the module `name`.
Replaces the current references with `refs` if `version` is newer than the current version managed
in `refs` and otherwise merges the reference data if `version` is equal to the current version.
-/
def updateWorkerRefs
    (self      : References)
    (name      : Name)
    (moduleUri : DocumentUri)
    (version   : Nat)
    (refs      : Lsp.ModuleRefs)
    : References := Id.run do
  if let some { version := currVersion, .. } := self.workers[name]? then
    if version > currVersion then
      return { self with workers := self.workers.insert name { moduleUri, version, refs} }
    if version == currVersion then
      let current := self.workers.getD name { moduleUri, version, refs := Std.TreeMap.empty }
      let merged := refs.foldl (init := current.refs) fun m ident info =>
        m.getD ident Lsp.RefInfo.empty |>.merge info |> m.insert ident
      return { self with
        workers := self.workers.insert name { moduleUri, version, refs := merged }
      }
  return self

/--
Replaces the worker references in `self` with the `refs` of the worker managing the module `name`
if `version` is newer than the current version managed in `refs`.
-/
def finalizeWorkerRefs
    (self      : References)
    (name      : Name)
    (moduleUri : DocumentUri)
    (version   : Nat)
    (refs      : Lsp.ModuleRefs)
    : References := Id.run do
  if let some { version := currVersion, .. } := self.workers[name]? then
    if version < currVersion then
      return self
  return { self with workers := self.workers.insert name { moduleUri, version, refs } }

/-- Erases all worker references in `self` for the worker managing `name`. -/
def removeWorkerRefs (self : References) (name : Name) : References :=
  { self with workers := self.workers.erase name }

/--
All references for a module.
The current references in a file worker take precedence over those in .ilean files.
-/
abbrev AllRefsMap := Std.TreeMap Name (DocumentUri × Lsp.ModuleRefs) Name.quickCmp

/-- Yields a map from all modules to all of their references. -/
def allRefs (self : References) : AllRefsMap :=
  let ileanRefs := self.ileans.foldl (init := ∅) fun m name { moduleUri, refs, .. } => m.insert name (moduleUri, refs)
  self.workers.foldl (init := ileanRefs) fun m name { moduleUri, refs, ..} => m.insert name (moduleUri, refs)

/--
Gets the references for `mod`.
The current references in a file worker take precedence over those in .ilean files.
-/
def getModuleRefs? (self : References) (mod : Name) : Option (DocumentUri × Lsp.ModuleRefs) := do
  if let some worker := self.workers[mod]? then
    return (worker.moduleUri, worker.refs)
  if let some ilean := self.ileans[mod]? then
    return (ilean.moduleUri, ilean.refs)
  none

/--
Yields all references in `self` for `ident`, as well as the `DocumentUri` that each
reference occurs in.
-/
def allRefsFor
    (self  : References)
    (ident : RefIdent)
    : IO (Array (DocumentUri × Name × Lsp.RefInfo)) := do
  let refsToCheck := match ident with
    | RefIdent.const .. => self.allRefs.toArray
    | RefIdent.fvar identModule .. =>
      let identModuleName := identModule.toName
      match self.getModuleRefs? identModuleName with
      | none => #[]
      | some (moduleUri, refs) => #[(identModuleName, moduleUri, refs)]
  let mut result := #[]
  for (module, moduleUri, refs) in refsToCheck do
    let some info := refs.get? ident
      | continue
    result := result.push (moduleUri, module, info)
  return result

/-- Yields all references in `module` at `pos`. -/
def findAt (self : References) (module : Name) (pos : Lsp.Position) (includeStop := false) : Array RefIdent := Id.run do
  if let some (_, refs) := self.getModuleRefs? module then
    return refs.findAt pos includeStop
  #[]

/-- Yields the first reference in `module` at `pos`. -/
def findRange? (self : References) (module : Name) (pos : Lsp.Position) (includeStop := false) : Option Range := do
  let (_, refs) ← self.getModuleRefs? module
  refs.findRange? pos includeStop

/-- Location and parent declaration of a reference. -/
structure DocumentRefInfo where
  /-- Location of the reference. -/
  location    : Location
  /-- Module name of the reference. -/
  module      : Name
  /-- Parent declaration of the reference. -/
  parentInfo? : Option RefInfo.ParentDecl

/-- Yields locations and parent declaration for all references referring to `ident`. -/
def referringTo
    (self              : References)
    (ident             : RefIdent)
    (includeDefinition : Bool := true)
    : IO (Array DocumentRefInfo) := do
  let mut result := #[]
  for (moduleUri, module, info) in ← self.allRefsFor ident do
    if includeDefinition then
      if let some ⟨range, parentDeclInfo?⟩ := info.definition? then
        result := result.push ⟨⟨moduleUri, range⟩, module, parentDeclInfo?⟩
    for ⟨range, parentDeclInfo?⟩ in info.usages do
      result := result.push ⟨⟨moduleUri, range⟩, module, parentDeclInfo?⟩
  return result

/-- Yields the definition location of `ident`. -/
def definitionOf?
    (self  : References)
    (ident : RefIdent)
    : IO (Option DocumentRefInfo) := do
  for (moduleUri, module, info) in ← self.allRefsFor ident do
    let some ⟨definitionRange, definitionParentDeclInfo?⟩ := info.definition?
      | continue
    return some ⟨⟨moduleUri, definitionRange⟩, module, definitionParentDeclInfo?⟩
  return none

/-- A match in `References.definitionsMatching`. -/
structure MatchedDefinition (α : Type) where
  /-- Result of `filterMapMod`. -/
  mod    : Name
  /-- URI for `mod`. -/
  modUri : DocumentUri
  /-- Result of `filterMapIdent`. -/
  ident  : α
  /-- Definition range of matched identifier. -/
  range  : Range

/-- Yields all definitions matching the given `filter`. -/
def definitionsMatching
    (self           : References)
    (filterMapIdent : Name → IO (Option α))
    (cancelTk?      : Option CancelToken := none)
    : IO (Array (MatchedDefinition α)) := do
  let mut result := #[]
  for (module, moduleUri, refs) in self.allRefs do
    if let some cancelTk := cancelTk? then
      if ← cancelTk.isSet then
        return result
    for (ident, info) in refs do
      let (RefIdent.const _ nameString, some ⟨definitionRange, _⟩) := (ident, info.definition?)
        | continue
      let some v ← filterMapIdent nameString.toName
        | continue
      result := result.push ⟨module, moduleUri, v, definitionRange⟩
  return result

end References

end Lean.Server
