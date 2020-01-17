/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura, Sebastian Ullrich
-/
prelude
import Init.Lean.Elab.Term
import Init.Lean.Elab.Tactic.Basic

namespace Lean
namespace Elab

namespace Term

def mkTacticMVar (ref : Syntax) (type : Expr) (tacticCode : Syntax) : TermElabM Expr := do
mvar ← mkFreshExprMVar ref type MetavarKind.synthetic `main;
let mvarId := mvar.mvarId!;
registerSyntheticMVar ref mvarId $ SyntheticMVarKind.tactic tacticCode;
pure mvar

@[builtinTermElab tacticBlock] def elabTacticBlock : TermElab :=
fun stx expectedType? =>
  match expectedType? with
  | some expectedType => mkTacticMVar stx expectedType (stx.getArg 1)
  | none => throwError stx ("invalid tactic block, expected type has not been provided")

open Tactic (TacticElabM elabTactic)

def liftTacticElabM {α} (mvarId : MVarId) (x : TacticElabM α) : TermElabM α :=
withMVarContext mvarId $ fun ctx s =>
  let mvar := mkMVar mvarId;
  match x { main := mvar, .. ctx } { goals := [mvar], .. s } with
  | EStateM.Result.error ex newS => EStateM.Result.error (Term.Exception.ex ex) newS.toTermState
  | EStateM.Result.ok a newS     => EStateM.Result.ok a newS.toTermState

def reportUnsolvedGoals (ref : Syntax) (goals : List Expr) : TermElabM Unit :=
-- TODO: pretty print goals
throwError ref "there are unsolved goals"

def runTactic (ref : Syntax) (mvarId : MVarId) (tacticCode : Syntax) : TermElabM Unit := do
modify $ fun s => { mctx := s.mctx.instantiateMVarDeclMVars mvarId, .. s };
remainingGoals ← liftTacticElabM mvarId $ do { elabTactic tacticCode; s ← get; pure s.goals };
unless remainingGoals.isEmpty (reportUnsolvedGoals ref remainingGoals);
-- TODO: check unassigned metavariables in mvarId
pure ()

end Term

end Elab
end Lean
