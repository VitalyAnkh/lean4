/-
Copyright (c) 2024 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Kim Morrison
-/
module

prelude
public import Init.Data.List.Nat.Find
public import all Init.Data.Array.Basic
public import Init.Data.Array.Lemmas
public import Init.Data.Array.Attach
public import Init.Data.Array.Range

public section

/-!
# Lemmas about `Array.findSome?`, `Array.find?, `Array.findIdx`, `Array.findIdx?`, `Array.idxOf`.
-/

set_option linter.listVariables true -- Enforce naming conventions for `List`/`Array`/`Vector` variables.
set_option linter.indexVariables true -- Enforce naming conventions for index variables.
namespace Array

open Nat

/-! ### findSome? -/

@[simp, grind] theorem findSome?_empty : (#[] : Array α).findSome? f = none := rfl
@[simp, grind] theorem findSome?_push {xs : Array α} : (xs.push a).findSome? f = (xs.findSome? f).or (f a) := by
  cases xs; simp [List.findSome?_append]

@[grind]
theorem findSome?_singleton {a : α} {f : α → Option β} : #[a].findSome? f = f a := by
  simp

@[simp] theorem findSomeRev?_push_of_isSome {xs : Array α} (h : (f a).isSome) : (xs.push a).findSomeRev? f = f a := by
  cases xs; simp_all

@[simp] theorem findSomeRev?_push_of_isNone {xs : Array α} (h : (f a).isNone) : (xs.push a).findSomeRev? f = xs.findSomeRev? f := by
  cases xs; simp_all

@[grind =]
theorem findSomeRev?_push {xs : Array α} {a : α} {f : α → Option β} :
    (xs.push a).findSomeRev? f = (f a).or (xs.findSomeRev? f) := by
  match h : f a with
  | some b =>
    rw [findSomeRev?_push_of_isSome]
    all_goals simp_all
  | none =>
    rw [findSomeRev?_push_of_isNone]
    all_goals simp_all

theorem exists_of_findSome?_eq_some {f : α → Option β} {xs : Array α} (w : xs.findSome? f = some b) :
    ∃ a, a ∈ xs ∧ f a = some b := by
  cases xs; simp_all [List.exists_of_findSome?_eq_some]

@[simp, grind =] theorem findSome?_eq_none_iff : findSome? p xs = none ↔ ∀ x ∈ xs, p x = none := by
  cases xs; simp

@[simp] theorem findSome?_isSome_iff {f : α → Option β} {xs : Array α} :
    (xs.findSome? f).isSome ↔ ∃ x, x ∈ xs ∧ (f x).isSome := by
  cases xs; simp

theorem findSome?_eq_some_iff {f : α → Option β} {xs : Array α} {b : β} :
    xs.findSome? f = some b ↔ ∃ (ys : Array α) (a : α) (zs : Array α), xs = ys.push a ++ zs ∧ f a = some b ∧ ∀ x ∈ ys, f x = none := by
  cases xs
  simp only [List.findSome?_toArray, List.findSome?_eq_some_iff]
  constructor
  · rintro ⟨l₁, a, l₂, rfl, h₁, h₂⟩
    exact ⟨l₁.toArray, a, l₂.toArray, by simp_all⟩
  · rintro ⟨xs, a, ys, h₀, h₁, h₂⟩
    exact ⟨xs.toList, a, ys.toList, by simpa using congrArg toList h₀, h₁, by simpa⟩

@[simp, grind =] theorem findSome?_guard {xs : Array α} : findSome? (Option.guard p) xs = find? p xs := by
  cases xs; simp

theorem find?_eq_findSome?_guard {xs : Array α} : find? p xs = findSome? (Option.guard p) xs :=
  findSome?_guard.symm

@[simp, grind =] theorem getElem?_zero_filterMap {f : α → Option β} {xs : Array α} : (xs.filterMap f)[0]? = xs.findSome? f := by
  cases xs; simp [← List.head?_eq_getElem?]

@[simp, grind =] theorem getElem_zero_filterMap {f : α → Option β} {xs : Array α} (h) :
    (xs.filterMap f)[0] = (xs.findSome? f).get (by cases xs; simpa [List.length_filterMap_eq_countP] using h) := by
  cases xs; simp [← getElem?_zero_filterMap]

@[simp, grind =] theorem back?_filterMap {f : α → Option β} {xs : Array α} : (xs.filterMap f).back? = xs.findSomeRev? f := by
  cases xs; simp

@[simp, grind =] theorem back!_filterMap [Inhabited β] {f : α → Option β} {xs : Array α} :
    (xs.filterMap f).back! = (xs.findSomeRev? f).getD default := by
  cases xs; simp

@[simp, grind _=_] theorem map_findSome? {f : α → Option β} {g : β → γ} {xs : Array α} :
    (xs.findSome? f).map g = xs.findSome? (Option.map g ∘ f) := by
  cases xs; simp

@[grind _=_]
theorem findSome?_map {f : β → γ} {xs : Array β} : findSome? p (xs.map f) = xs.findSome? (p ∘ f) := by
  cases xs; simp [List.findSome?_map]

@[grind =]
theorem findSome?_append {xs ys : Array α} : (xs ++ ys).findSome? f = (xs.findSome? f).or (ys.findSome? f) := by
  cases xs; cases ys; simp [List.findSome?_append]

@[grind =]
theorem getElem?_zero_flatten (xss : Array (Array α)) :
    (flatten xss)[0]? = xss.findSome? fun xs => xs[0]? := by
  cases xss using array₂_induction
  simp [← List.head?_eq_getElem?, List.head?_flatten, List.findSome?_map, Function.comp_def]

theorem getElem_zero_flatten.proof {xss : Array (Array α)} (h : 0 < xss.flatten.size) :
    (xss.findSome? fun xs => xs[0]?).isSome := by
  cases xss using array₂_induction
  simp only [List.findSome?_toArray, List.findSome?_map, Function.comp_def, List.getElem?_toArray,
    List.findSome?_isSome_iff, isSome_getElem?]
  simp only [flatten_toArray_map_toArray, List.size_toArray, List.length_flatten,
    Nat.sum_pos_iff_exists_pos, List.mem_map] at h
  obtain ⟨_, ⟨xs, m, rfl⟩, h⟩ := h
  exact ⟨xs, m, by simpa using h⟩

@[grind =]
theorem getElem_zero_flatten {xss : Array (Array α)} (h) :
    (flatten xss)[0] = (xss.findSome? fun xs => xs[0]?).get (getElem_zero_flatten.proof h) := by
  have t := getElem?_zero_flatten xss
  simp at t
  simp [← t]

@[grind =]
theorem findSome?_replicate : findSome? f (replicate n a) = if n = 0 then none else f a := by
  simp [← List.toArray_replicate, List.findSome?_replicate]

@[deprecated findSome?_replicate (since := "2025-03-18")]
abbrev findSome?_mkArray := @findSome?_replicate

@[simp] theorem findSome?_replicate_of_pos (h : 0 < n) : findSome? f (replicate n a) = f a := by
  simp [findSome?_replicate, Nat.ne_of_gt h]

@[deprecated findSome?_replicate_of_pos (since := "2025-03-18")]
abbrev findSome?_mkArray_of_pos := @findSome?_replicate_of_pos

-- Argument is unused, but used to decide whether `simp` should unfold.
@[simp] theorem findSome?_replicate_of_isSome (_ : (f a).isSome) :
   findSome? f (replicate n a) = if n = 0 then none else f a := by
  simp [findSome?_replicate]

@[deprecated findSome?_replicate_of_isSome (since := "2025-03-18")]
abbrev findSome?_mkArray_of_isSome := @findSome?_replicate_of_isSome

@[simp] theorem findSome?_replicate_of_isNone (h : (f a).isNone) :
    findSome? f (replicate n a) = none := by
  rw [Option.isNone_iff_eq_none] at h
  simp [findSome?_replicate, h]

@[deprecated findSome?_replicate_of_isNone (since := "2025-03-18")]
abbrev findSome?_mkArray_of_isNone := @findSome?_replicate_of_isNone

/-! ### find? -/

@[simp, grind =] theorem find?_empty : find? p #[] = none := rfl

@[grind =]
theorem find?_singleton {a : α} {p : α → Bool} :
    #[a].find? p = if p a then some a else none := by
  simp

@[simp] theorem findRev?_push_of_pos {xs : Array α} (h : p a) :
    findRev? p (xs.push a) = some a := by
  cases xs; simp [h]

@[simp] theorem findRev?_push_of_neg {xs : Array α} (h : ¬p a) :
    findRev? p (xs.push a) = findRev? p xs := by
  cases xs; simp [h]

@[deprecated findRev?_push_of_neg (since := "2025-06-12")]
abbrev findRev?_cons_of_neg := @findRev?_push_of_neg

@[grind =]
theorem finRev?_push {xs : Array α} :
    findRev? p (xs.push a) = (Option.guard p a).or (xs.findRev? p) := by
  cases h : p a
  · rw [findRev?_push_of_neg, Option.guard_eq_none_iff.mpr h]
    all_goals simp [h]
  · rw [findRev?_push_of_pos, Option.guard_eq_some_iff.mpr ⟨rfl, h⟩]
    all_goals simp [h]

@[deprecated finRev?_push (since := "2025-06-12")]
abbrev findRev?_cons := @finRev?_push

@[simp, grind =] theorem find?_eq_none : find? p xs = none ↔ ∀ x ∈ xs, ¬ p x := by
  cases xs; simp

theorem find?_eq_some_iff_append {xs : Array α} :
    xs.find? p = some b ↔ p b ∧ ∃ (as bs : Array α), xs = as.push b ++ bs ∧ ∀ a ∈ as, !p a := by
  rcases xs with ⟨xs⟩
  simp only [List.find?_toArray, List.find?_eq_some_iff_append, Bool.not_eq_eq_eq_not,
    Bool.not_true, exists_and_right, and_congr_right_iff]
  intro w
  constructor
  · rintro ⟨as, ⟨⟨xs, rfl⟩, h⟩⟩
    exact ⟨as.toArray, ⟨xs.toArray, by simp⟩ , by simpa using h⟩
  · rintro ⟨as, ⟨⟨⟨l⟩, h'⟩, h⟩⟩
    exact ⟨as.toList, ⟨l, by simpa using congrArg Array.toList h'⟩,
      by simpa using h⟩

theorem find?_push {xs : Array α} : (xs.push a).find? p = (xs.find? p).or (if p a then some a else none) := by
  cases xs; simp

@[simp]
theorem find?_push_eq_some {xs : Array α} :
    (xs.push a).find? p = some b ↔ xs.find? p = some b ∨ (xs.find? p = none ∧ (p a ∧ a = b)) := by
  cases xs; simp

@[simp, grind =] theorem find?_isSome {xs : Array α} {p : α → Bool} : (xs.find? p).isSome ↔ ∃ x, x ∈ xs ∧ p x := by
  cases xs; simp

@[grind →]
theorem find?_some {xs : Array α} (h : find? p xs = some a) : p a := by
  cases xs
  simp at h
  exact List.find?_some h

@[grind →]
theorem mem_of_find?_eq_some {xs : Array α} (h : find? p xs = some a) : a ∈ xs := by
  cases xs
  simp at h
  simpa using List.mem_of_find?_eq_some h

@[grind]
theorem get_find?_mem {xs : Array α} (h) : (xs.find? p).get h ∈ xs := by
  cases xs
  simp [List.get_find?_mem]

@[simp, grind =] theorem find?_filter {xs : Array α} (p q : α → Bool) :
    (xs.filter p).find? q = xs.find? (fun a => p a ∧ q a) := by
  cases xs; simp

@[simp, grind =] theorem getElem?_zero_filter {p : α → Bool} {xs : Array α} :
    (xs.filter p)[0]? = xs.find? p := by
  cases xs; simp [← List.head?_eq_getElem?]

@[simp, grind =] theorem getElem_zero_filter {p : α → Bool} {xs : Array α} (h) :
    (xs.filter p)[0] =
      (xs.find? p).get (by cases xs; simpa [← List.countP_eq_length_filter] using h) := by
  cases xs
  simp [List.getElem_zero_eq_head]

@[simp, grind =] theorem back?_filter {p : α → Bool} {xs : Array α} : (xs.filter p).back? = xs.findRev? p := by
  cases xs; simp

@[simp, grind =] theorem back!_filter [Inhabited α] {p : α → Bool} {xs : Array α} :
    (xs.filter p).back! = (xs.findRev? p).get! := by
  cases xs; simp [Option.get!_eq_getD]

@[simp, grind =] theorem find?_filterMap {xs : Array α} {f : α → Option β} {p : β → Bool} :
    (xs.filterMap f).find? p = (xs.find? (fun a => (f a).any p)).bind f := by
  cases xs; simp

@[simp, grind =] theorem find?_map {f : β → α} {xs : Array β} :
    find? p (xs.map f) = (xs.find? (p ∘ f)).map f := by
  cases xs; simp

@[simp, grind =] theorem find?_append {xs ys : Array α} :
    (xs ++ ys).find? p = (xs.find? p).or (ys.find? p) := by
  cases xs
  cases ys
  simp

@[simp, grind _=_] theorem find?_flatten {xss : Array (Array α)} {p : α → Bool} :
    xss.flatten.find? p = xss.findSome? (find? p) := by
  cases xss using array₂_induction
  simp [List.findSome?_map, Function.comp_def]

theorem find?_flatten_eq_none_iff {xss : Array (Array α)} {p : α → Bool} :
    xss.flatten.find? p = none ↔ ∀ ys ∈ xss, ∀ x ∈ ys, !p x := by
  simp

@[deprecated find?_flatten_eq_none_iff (since := "2025-02-03")]
abbrev find?_flatten_eq_none := @find?_flatten_eq_none_iff

/--
If `find? p` returns `some a` from `xs.flatten`, then `p a` holds, and
some array in `xs` contains `a`, and no earlier element of that array satisfies `p`.
Moreover, no earlier array in `xs` has an element satisfying `p`.
-/
theorem find?_flatten_eq_some_iff {xss : Array (Array α)} {p : α → Bool} {a : α} :
    xss.flatten.find? p = some a ↔
      p a ∧ ∃ (as : Array (Array α)) (ys zs : Array α) (bs : Array (Array α)),
        xss = as.push (ys.push a ++ zs) ++ bs ∧
        (∀ ws ∈ as, ∀ x ∈ ws, !p x) ∧ (∀ x ∈ ys, !p x) := by
  cases xss using array₂_induction
  simp only [flatten_toArray_map_toArray, List.find?_toArray, List.find?_flatten_eq_some_iff]
  simp only [Bool.not_eq_eq_eq_not, Bool.not_true, exists_and_right, and_congr_right_iff]
  intro w
  constructor
  · rintro ⟨as, ys, ⟨⟨zs, bs, rfl⟩, h₁, h₂⟩⟩
    exact ⟨as.toArray.map List.toArray, ys.toArray,
      ⟨zs.toArray, bs.toArray.map List.toArray, by simp⟩, by simpa using h₁, by simpa using h₂⟩
  · rintro ⟨as, ys, ⟨⟨zs, bs, h⟩, h₁, h₂⟩⟩
    replace h := congrArg (·.map Array.toList) (congrArg Array.toList h)
    simp [Function.comp_def] at h
    exact ⟨as.toList.map Array.toList, ys.toList,
      ⟨zs.toList, bs.toList.map Array.toList, by simpa using h⟩,
        by simpa using h₁, by simpa using h₂⟩

@[deprecated find?_flatten_eq_some_iff (since := "2025-02-03")]
abbrev find?_flatten_eq_some := @find?_flatten_eq_some_iff

@[simp, grind =] theorem find?_flatMap {xs : Array α} {f : α → Array β} {p : β → Bool} :
    (xs.flatMap f).find? p = xs.findSome? (fun x => (f x).find? p) := by
  cases xs
  simp [List.find?_flatMap]

theorem find?_flatMap_eq_none_iff {xs : Array α} {f : α → Array β} {p : β → Bool} :
    (xs.flatMap f).find? p = none ↔ ∀ x ∈ xs, ∀ y ∈ f x, !p y := by
  simp

@[deprecated find?_flatMap_eq_none_iff (since := "2025-02-03")]
abbrev find?_flatMap_eq_none := @find?_flatMap_eq_none_iff

@[grind =]
theorem find?_replicate :
    find? p (replicate n a) = if n = 0 then none else if p a then some a else none := by
  simp [← List.toArray_replicate, List.find?_replicate]

@[deprecated find?_replicate (since := "2025-03-18")]
abbrev find?_mkArray := @find?_replicate

@[simp] theorem find?_replicate_of_size_pos (h : 0 < n) :
    find? p (replicate n a) = if p a then some a else none := by
  simp [find?_replicate, Nat.ne_of_gt h]

@[deprecated find?_replicate_of_size_pos (since := "2025-03-18")]
abbrev find?_mkArray_of_length_pos := @find?_replicate_of_size_pos

@[simp] theorem find?_replicate_of_pos (h : p a) :
    find? p (replicate n a) = if n = 0 then none else some a := by
  simp [find?_replicate, h]

@[deprecated find?_replicate_of_pos (since := "2025-03-18")]
abbrev find?_mkArray_of_pos := @find?_replicate_of_pos

@[simp] theorem find?_replicate_of_neg (h : ¬ p a) : find? p (replicate n a) = none := by
  simp [find?_replicate, h]

@[deprecated find?_replicate_of_neg (since := "2025-03-18")]
abbrev find?_mkArray_of_neg := @find?_replicate_of_neg

-- This isn't a `@[simp]` lemma since there is already a lemma for `l.find? p = none` for any `l`.
theorem find?_replicate_eq_none_iff {n : Nat} {a : α} {p : α → Bool} :
    (replicate n a).find? p = none ↔ n = 0 ∨ !p a := by
  simp [← List.toArray_replicate, Classical.or_iff_not_imp_left]

@[deprecated find?_replicate_eq_none_iff (since := "2025-03-18")]
abbrev find?_mkArray_eq_none_iff := @find?_replicate_eq_none_iff

@[simp] theorem find?_replicate_eq_some_iff {n : Nat} {a b : α} {p : α → Bool} :
    (replicate n a).find? p = some b ↔ n ≠ 0 ∧ p a ∧ a = b := by
  simp [← List.toArray_replicate]

@[deprecated find?_replicate_eq_some_iff (since := "2025-03-18")]
abbrev find?_mkArray_eq_some_iff := @find?_replicate_eq_some_iff

@[deprecated find?_replicate_eq_some_iff (since := "2025-02-03")]
abbrev find?_mkArray_eq_some := @find?_replicate_eq_some_iff

@[simp] theorem get_find?_replicate {n : Nat} {a : α} {p : α → Bool} (h) :
    ((replicate n a).find? p).get h = a := by
  simp [← List.toArray_replicate]

@[deprecated get_find?_replicate (since := "2025-03-18")]
abbrev get_find?_mkArray := @get_find?_replicate

@[grind =]
theorem find?_pmap {P : α → Prop} {f : (a : α) → P a → β} {xs : Array α}
    (H : ∀ (a : α), a ∈ xs → P a) {p : β → Bool} :
    (xs.pmap f H).find? p = (xs.attach.find? (fun ⟨a, m⟩ => p (f a (H a m)))).map fun ⟨a, m⟩ => f a (H a m) := by
  simp only [pmap_eq_map_attach, find?_map]
  rfl

theorem find?_eq_some_iff_getElem {xs : Array α} {p : α → Bool} {b : α} :
    xs.find? p = some b ↔ p b ∧ ∃ i h, xs[i] = b ∧ ∀ j : Nat, (hj : j < i) → !p xs[j] := by
  rcases xs with ⟨xs⟩
  simp [List.find?_eq_some_iff_getElem]

/-! ### findIdx -/

@[grind =]
theorem findIdx_empty : findIdx p #[] = 0 := by simp

@[grind =]
theorem findIdx_singleton {a : α} {p : α → Bool} :
    #[a].findIdx p = if p a then 0 else 1 := by
  simp

@[grind →]
theorem findIdx_of_getElem?_eq_some {xs : Array α} (w : xs[xs.findIdx p]? = some y) : p y := by
  rcases xs with ⟨xs⟩
  exact List.findIdx_of_getElem?_eq_some (by simpa using w)

theorem findIdx_getElem {xs : Array α} {w : xs.findIdx p < xs.size} :
    p xs[xs.findIdx p] :=
  xs.findIdx_of_getElem?_eq_some (getElem?_eq_getElem w)

grind_pattern findIdx_getElem => xs[xs.findIdx p]

theorem findIdx_lt_size_of_exists {xs : Array α} (h : ∃ x ∈ xs, p x) :
    xs.findIdx p < xs.size := by
  rcases xs with ⟨xs⟩
  simpa using List.findIdx_lt_length_of_exists (by simpa using h)

theorem findIdx_getElem?_eq_getElem_of_exists {xs : Array α} (h : ∃ x ∈ xs, p x) :
    xs[xs.findIdx p]? = some (xs[xs.findIdx p]'(xs.findIdx_lt_size_of_exists h)) :=
  getElem?_eq_getElem (findIdx_lt_size_of_exists h)

@[simp]
theorem findIdx_eq_size {p : α → Bool} {xs : Array α} :
    xs.findIdx p = xs.size ↔ ∀ x ∈ xs, p x = false := by
  rcases xs with ⟨xs⟩
  simp

theorem findIdx_eq_size_of_false {p : α → Bool} {xs : Array α} (h : ∀ x ∈ xs, p x = false) :
    xs.findIdx p = xs.size := by
  rcases xs with ⟨xs⟩
  simp_all

theorem findIdx_le_size {p : α → Bool} {xs : Array α} : xs.findIdx p ≤ xs.size := by
  by_cases e : ∃ x ∈ xs, p x
  · exact Nat.le_of_lt (findIdx_lt_size_of_exists e)
  · simp at e
    exact Nat.le_of_eq (findIdx_eq_size.mpr e)

grind_pattern findIdx_le_size => xs.findIdx p, xs.size

@[simp]
theorem findIdx_lt_size {p : α → Bool} {xs : Array α} :
    xs.findIdx p < xs.size ↔ ∃ x ∈ xs, p x := by
  rcases xs with ⟨xs⟩
  simp

grind_pattern findIdx_lt_size => xs.findIdx p, xs.size

/-- `p` does not hold for elements with indices less than `xs.findIdx p`. -/
theorem not_of_lt_findIdx {p : α → Bool} {xs : Array α} {i : Nat} (h : i < xs.findIdx p) :
    p (xs[i]'(Nat.le_trans h findIdx_le_size)) = false := by
  rcases xs with ⟨xs⟩
  simpa using List.not_of_lt_findIdx (by simpa using h)

grind_pattern not_of_lt_findIdx => xs.findIdx p, xs[i]

/-- If `¬ p xs[j]` for all `j < i`, then `i ≤ xs.findIdx p`. -/
theorem le_findIdx_of_not {p : α → Bool} {xs : Array α} {i : Nat} (h : i < xs.size)
    (h2 : ∀ j (hji : j < i), p (xs[j]'(Nat.lt_trans hji h)) = false) : i ≤ xs.findIdx p := by
  apply Decidable.byContradiction
  intro f
  simp only [Nat.not_le] at f
  exact absurd (@findIdx_getElem _ p xs (Nat.lt_trans f h)) (by simpa using h2 (xs.findIdx p) f)

/-- If `¬ p xs[j]` for all `j ≤ i`, then `i < xs.findIdx p`. -/
theorem lt_findIdx_of_not {p : α → Bool} {xs : Array α} {i : Nat} (h : i < xs.size)
    (h2 : ∀ j (hji : j ≤ i), ¬p (xs[j]'(Nat.lt_of_le_of_lt hji h))) : i < xs.findIdx p := by
  apply Decidable.byContradiction
  intro f
  simp only [Nat.not_lt] at f
  exact absurd (@findIdx_getElem _ p xs (Nat.lt_of_le_of_lt f h)) (h2 (xs.findIdx p) f)

/-- `xs.findIdx p = i` iff `p xs[i]` and `¬ p xs [j]` for all `j < i`. -/
theorem findIdx_eq {p : α → Bool} {xs : Array α} {i : Nat} (h : i < xs.size) :
    xs.findIdx p = i ↔ p xs[i] ∧ ∀ j (hji : j < i), p (xs[j]'(Nat.lt_trans hji h)) = false := by
  refine ⟨fun f ↦ ⟨f ▸ (@findIdx_getElem _ p xs (f ▸ h)), fun _ hji ↦ not_of_lt_findIdx (f ▸ hji)⟩,
    fun ⟨_, h2⟩ ↦ ?_⟩
  apply Nat.le_antisymm _ (le_findIdx_of_not h h2)
  apply Decidable.byContradiction
  intro h3
  simp at h3
  simp_all [not_of_lt_findIdx h3]

@[grind =]
theorem findIdx_append {p : α → Bool} {xs ys : Array α} :
    (xs ++ ys).findIdx p =
      if xs.findIdx p < xs.size then xs.findIdx p else ys.findIdx p + xs.size := by
  rcases xs with ⟨xs⟩
  rcases ys with ⟨ys⟩
  simp [List.findIdx_append]

@[grind =]
theorem findIdx_push {xs : Array α} {a : α} {p : α → Bool} :
    (xs.push a).findIdx p = if xs.findIdx p < xs.size then xs.findIdx p else xs.size + if p a then 0 else 1 := by
  simp only [push_eq_append, findIdx_append]
  split <;> rename_i h
  · rfl
  · simp [Nat.add_comm]

theorem findIdx_le_findIdx {xs : Array α} {p q : α → Bool} (h : ∀ x ∈ xs, p x → q x) : xs.findIdx q ≤ xs.findIdx p := by
  rcases xs with ⟨xs⟩
  simp_all [List.findIdx_le_findIdx]

@[simp] theorem findIdx_subtype {p : α → Prop} {xs : Array { x // p x }}
    {f : { x // p x } → Bool} {g : α → Bool} (hf : ∀ x h, f ⟨x, h⟩ = g x) :
    xs.findIdx f = xs.unattach.findIdx g := by
  cases xs
  simp [hf]

theorem false_of_mem_extract_findIdx {xs : Array α} {p : α → Bool} (h : x ∈ xs.extract 0 (xs.findIdx p)) :
    p x = false := by
  rcases xs with ⟨xs⟩
  exact List.false_of_mem_take_findIdx (by simpa using h)

@[simp, grind =] theorem findIdx_extract {xs : Array α} {i : Nat} {p : α → Bool} :
    (xs.extract 0 i).findIdx p = min i (xs.findIdx p) := by
  cases xs
  simp

@[simp] theorem min_findIdx_findIdx {xs : Array α} {p q : α → Bool} :
    min (xs.findIdx p) (xs.findIdx q) = xs.findIdx (fun a => p a || q a) := by
  cases xs
  simp

/-! ### findIdx? -/

@[simp, grind =] theorem findIdx?_empty : (#[] : Array α).findIdx? p = none := by simp
@[grind =] theorem findIdx?_singleton {a : α} {p : α → Bool} :
    #[a].findIdx? p = if p a then some 0 else none := by
  simp

@[simp, grind =]
theorem findIdx?_eq_none_iff {xs : Array α} {p : α → Bool} :
    xs.findIdx? p = none ↔ ∀ x, x ∈ xs → p x = false := by
  rcases xs with ⟨xs⟩
  simp

@[simp, grind =]
theorem findIdx?_isSome {xs : Array α} {p : α → Bool} :
    (xs.findIdx? p).isSome = xs.any p := by
  rcases xs with ⟨xs⟩
  simp [List.findIdx?_isSome]

@[simp, grind =]
theorem findIdx?_isNone {xs : Array α} {p : α → Bool} :
    (xs.findIdx? p).isNone = xs.all (¬p ·) := by
  rcases xs with ⟨xs⟩
  simp [List.findIdx?_isNone]

theorem findIdx?_eq_some_iff_findIdx_eq {xs : Array α} {p : α → Bool} {i : Nat} :
    xs.findIdx? p = some i ↔ i < xs.size ∧ xs.findIdx p = i := by
  rcases xs with ⟨xs⟩
  simp [List.findIdx?_eq_some_iff_findIdx_eq]

theorem findIdx?_eq_some_of_exists {xs : Array α} {p : α → Bool} (h : ∃ x, x ∈ xs ∧ p x) :
    xs.findIdx? p = some (xs.findIdx p) := by
  rw [findIdx?_eq_some_iff_findIdx_eq]
  exact ⟨findIdx_lt_size_of_exists h, rfl⟩

theorem findIdx?_eq_none_iff_findIdx_eq {xs : Array α} {p : α → Bool} :
    xs.findIdx? p = none ↔ xs.findIdx p = xs.size := by
  rcases xs with ⟨xs⟩
  simp

theorem findIdx?_eq_guard_findIdx_lt {xs : Array α} {p : α → Bool} :
    xs.findIdx? p = Option.guard (fun i => i < xs.size) (xs.findIdx p) := by
  rcases xs with ⟨xs⟩
  simp [List.findIdx?_eq_guard_findIdx_lt]

theorem findIdx?_eq_some_iff_getElem {xs : Array α} {p : α → Bool} {i : Nat} :
    xs.findIdx? p = some i ↔
      ∃ h : i < xs.size, p xs[i] ∧ ∀ j (hji : j < i), ¬p (xs[j]'(Nat.lt_trans hji h)) := by
  rcases xs with ⟨xs⟩
  simp [List.findIdx?_eq_some_iff_getElem]

theorem of_findIdx?_eq_some {xs : Array α} {p : α → Bool} (w : xs.findIdx? p = some i) :
    match xs[i]? with | some a => p a | none => false := by
  rcases xs with ⟨xs⟩
  simpa using List.of_findIdx?_eq_some (by simpa using w)

theorem of_findIdx?_eq_none {xs : Array α} {p : α → Bool} (w : xs.findIdx? p = none) :
    ∀ i : Nat, match xs[i]? with | some a => ¬ p a | none => true := by
  rcases xs with ⟨xs⟩
  simpa using List.of_findIdx?_eq_none (by simpa using w)

@[simp, grind =] theorem findIdx?_map {f : β → α} {xs : Array β} {p : α → Bool} :
    findIdx? p (xs.map f) = xs.findIdx? (p ∘ f) := by
  rcases xs with ⟨xs⟩
  simp [List.findIdx?_map]

@[simp, grind =] theorem findIdx?_append :
    (xs ++ ys : Array α).findIdx? p =
      (xs.findIdx? p).or ((ys.findIdx? p).map fun i => i + xs.size) := by
  rcases xs with ⟨xs⟩
  rcases ys with ⟨ys⟩
  simp [List.findIdx?_append]

@[grind =]
theorem findIdx?_push {xs : Array α} {a : α} {p : α → Bool} :
    (xs.push a).findIdx? p = (xs.findIdx? p).or (if p a then some xs.size else none) := by
  simp only [push_eq_append, findIdx?_append]
  split <;> rename_i h
  · simp only [findIdx?_singleton, if_pos h, Option.map_some, Nat.zero_add]
  · simp only [findIdx?_singleton, if_neg h, Option.map_none]

theorem findIdx?_flatten {xss : Array (Array α)} {p : α → Bool} :
    xss.flatten.findIdx? p =
      (xss.findIdx? (·.any p)).map
        fun i => ((xss.take i).map Array.size).sum +
          (xss[i]?.map fun xs => xs.findIdx p).getD 0 := by
  cases xss using array₂_induction
  simp [List.findIdx?_flatten, Function.comp_def]

@[simp, grind =] theorem findIdx?_replicate :
    (replicate n a).findIdx? p = if 0 < n ∧ p a then some 0 else none := by
  rw [← List.toArray_replicate]
  simp only [List.findIdx?_toArray]
  simp

@[deprecated findIdx?_replicate (since := "2025-03-18")]
abbrev findIdx?_mkArray := @findIdx?_replicate

theorem findIdx?_eq_findSome?_zipIdx {xs : Array α} {p : α → Bool} :
    xs.findIdx? p = xs.zipIdx.findSome? fun ⟨a, i⟩ => if p a then some i else none := by
  rcases xs with ⟨xs⟩
  simp [List.findIdx?_eq_findSome?_zipIdx]

theorem findIdx?_eq_fst_find?_zipIdx {xs : Array α} {p : α → Bool} :
    xs.findIdx? p = (xs.zipIdx.find? fun ⟨x, _⟩ => p x).map (·.2) := by
  rcases xs with ⟨xs⟩
  simp [List.findIdx?_eq_fst_find?_zipIdx]

-- See also `findIdx_le_findIdx`.
theorem findIdx?_eq_none_of_findIdx?_eq_none {xs : Array α} {p q : α → Bool} (w : ∀ x ∈ xs, p x → q x) :
    xs.findIdx? q = none → xs.findIdx? p = none := by
  rcases xs with ⟨xs⟩
  simpa using List.findIdx?_eq_none_of_findIdx?_eq_none (by simpa using w)

@[grind =]
theorem findIdx_eq_getD_findIdx? {xs : Array α} {p : α → Bool} :
    xs.findIdx p = (xs.findIdx? p).getD xs.size := by
  rcases xs with ⟨xs⟩
  simp [List.findIdx_eq_getD_findIdx?]

theorem findIdx?_eq_some_le_of_findIdx?_eq_some {xs : Array α} {p q : α → Bool} (w : ∀ x ∈ xs, p x → q x) {i : Nat}
    (h : xs.findIdx? p = some i) : ∃ j, j ≤ i ∧ xs.findIdx? q = some j := by
  rcases xs with ⟨xs⟩
  simp [List.findIdx?_eq_some_le_of_findIdx?_eq_some (by simpa using w) (by simpa using h)]

@[simp] theorem findIdx?_subtype {p : α → Prop} {xs : Array { x // p x }}
    {f : { x // p x } → Bool} {g : α → Bool} (hf : ∀ x h, f ⟨x, h⟩ = g x) :
    xs.findIdx? f = xs.unattach.findIdx? g := by
  cases xs
  simp [hf]

@[simp, grind =] theorem findIdx?_take {xs : Array α} {i : Nat} {p : α → Bool} :
    (xs.take i).findIdx? p = (xs.findIdx? p).bind (Option.guard (fun j => j < i)) := by
  cases xs
  simp

/-! ### findFinIdx? -/

@[grind =]
theorem findFinIdx?_empty {p : α → Bool} : findFinIdx? p #[] = none := by simp

@[grind =]
theorem findFinIdx?_singleton {a : α} {p : α → Bool} :
    #[a].findFinIdx? p = if p a then some ⟨0, by simp⟩ else none := by
  simp

-- We can't mark this as a `@[congr]` lemma since the head of the RHS is not `findFinIdx?`.
theorem findFinIdx?_congr {p : α → Bool} {xs ys : Array α} (w : xs = ys) :
    findFinIdx? p xs = (findFinIdx? p ys).map (fun i => i.cast (by simp [w])) := by
  subst w
  simp

theorem findFinIdx?_eq_pmap_findIdx? {xs : Array α} {p : α → Bool} :
    xs.findFinIdx? p =
      (xs.findIdx? p).pmap
        (fun i m => by simp [findIdx?_eq_some_iff_getElem] at m; exact ⟨i, m.choose⟩)
        (fun i h => h) := by
  simp [findIdx?_eq_map_findFinIdx?_val, Option.pmap_map]

@[simp, grind =] theorem findFinIdx?_eq_none_iff {xs : Array α} {p : α → Bool} :
    xs.findFinIdx? p = none ↔ ∀ x, x ∈ xs → ¬ p x := by
  simp [findFinIdx?_eq_pmap_findIdx?]

@[simp]
theorem findFinIdx?_eq_some_iff {xs : Array α} {p : α → Bool} {i : Fin xs.size} :
    xs.findFinIdx? p = some i ↔
      p xs[i] ∧ ∀ j (hji : j < i), ¬p (xs[j]'(Nat.lt_trans hji i.2)) := by
  simp only [findFinIdx?_eq_pmap_findIdx?, Option.pmap_eq_some_iff, findIdx?_eq_some_iff_getElem,
    Bool.not_eq_true, exists_and_left, and_exists_self, Fin.getElem_fin]
  constructor
  · rintro ⟨a, ⟨h, w₁, w₂⟩, rfl⟩
    exact ⟨w₁, fun j hji => by simpa using w₂ j hji⟩
  · rintro ⟨h, w⟩
    exact ⟨i, ⟨i.2, h, fun j hji => w ⟨j, by omega⟩ hji⟩, rfl⟩

@[grind =]
theorem findFinIdx?_push {xs : Array α} {a : α} {p : α → Bool} :
    (xs.push a).findFinIdx? p =
      ((xs.findFinIdx? p).map (Fin.castLE (by simp))).or (if p a then some ⟨xs.size, by simp⟩ else none) := by
  simp only [findFinIdx?_eq_pmap_findIdx?, findIdx?_push, Option.pmap_or]
  split <;> rename_i h _ <;> split <;> simp [h]

@[grind =]
theorem findFinIdx?_append {xs ys : Array α} {p : α → Bool} :
    (xs ++ ys).findFinIdx? p =
      ((xs.findFinIdx? p).map (Fin.castLE (by simp))).or
        ((ys.findFinIdx? p).map (Fin.natAdd xs.size) |>.map (Fin.cast (by simp))) := by
  simp only [findFinIdx?_eq_pmap_findIdx?, findIdx?_append, Option.pmap_or]
  split <;> rename_i h _
  · simp [h, Option.pmap_map, Option.map_pmap, Nat.add_comm]
  · simp [h]

@[simp, grind =]
theorem isSome_findFinIdx? {xs : Array α} {p : α → Bool} :
    (xs.findFinIdx? p).isSome = xs.any p := by
  rcases xs with ⟨xs⟩
  simp [Array.size]

@[simp, grind =]
theorem isNone_findFinIdx? {xs : Array α} {p : α → Bool} :
    (xs.findFinIdx? p).isNone = xs.all (fun x => ¬ p x) := by
  rcases xs with ⟨xs⟩
  simp [Array.size]

@[simp] theorem findFinIdx?_subtype {p : α → Prop} {xs : Array { x // p x }}
    {f : { x // p x } → Bool} {g : α → Bool} (hf : ∀ x h, f ⟨x, h⟩ = g x) :
    xs.findFinIdx? f = (xs.unattach.findFinIdx? g).map (fun i => i.cast (by simp)) := by
  cases xs
  simp only [List.findFinIdx?_toArray, hf, List.findFinIdx?_subtype]
  rw [findFinIdx?_congr List.unattach_toArray]
  simp only [Option.map_map, Function.comp_def, Fin.cast_trans]
  simp [Array.size]

/-! ### idxOf

The verification API for `idxOf` is still incomplete.
The lemmas below should be made consistent with those for `findIdx` (and proved using them).
-/

@[grind =]
theorem idxOf_append [BEq α] [LawfulBEq α] {xs ys : Array α} {a : α} :
    (xs ++ ys).idxOf a = if a ∈ xs then xs.idxOf a else ys.idxOf a + xs.size := by
  rw [idxOf, findIdx_append]
  split <;> rename_i h
  · rw [if_pos]
    simpa using h
  · rw [if_neg]
    simpa using h

theorem idxOf_eq_size [BEq α] [LawfulBEq α] {xs : Array α} (h : a ∉ xs) : xs.idxOf a = xs.size := by
  rcases xs with ⟨xs⟩
  simp [List.idxOf_eq_length (by simpa using h)]

theorem idxOf_lt_length_of_mem [BEq α] [LawfulBEq α] {xs : Array α} (h : a ∈ xs) : xs.idxOf a < xs.size := by
  rcases xs with ⟨xs⟩
  simp [List.idxOf_lt_length_of_mem (by simpa using h)]

theorem idxOf_le_size [BEq α] [LawfulBEq α] {xs : Array α} {a : α} :
    xs.idxOf a ≤ xs.size := by
  rcases xs with ⟨xs⟩
  simp [List.idxOf_le_length]

grind_pattern idxOf_le_size => xs.idxOf a, xs.size

theorem idxOf_lt_size_iff [BEq α] [LawfulBEq α] {xs : Array α} {a : α} :
    xs.idxOf a < xs.size ↔ a ∈ xs := by
  rcases xs with ⟨xs⟩
  simp [List.idxOf_lt_length_iff]

grind_pattern idxOf_lt_size_iff => xs.idxOf a, xs.size

/-! ### idxOf?

The verification API for `idxOf?` is still incomplete.
The lemmas below should be made consistent with those for `findIdx?` (and proved using them).
-/

@[grind =] theorem idxOf?_empty [BEq α] : (#[] : Array α).idxOf? a = none := by simp

@[simp, grind =] theorem idxOf?_eq_none_iff [BEq α] [LawfulBEq α] {xs : Array α} {a : α} :
    xs.idxOf? a = none ↔ a ∉ xs := by
  rcases xs with ⟨xs⟩
  simp [List.idxOf?_eq_none_iff]

@[simp, grind =]
theorem isSome_idxOf? [BEq α] [LawfulBEq α] {xs : Array α} {a : α} :
    (xs.idxOf? a).isSome ↔ a ∈ xs := by
  rcases xs with ⟨xs⟩
  simp

@[grind =]
theorem isNone_idxOf? [BEq α] [LawfulBEq α] {xs : Array α} {a : α} :
    (xs.idxOf? a).isNone = ¬ a ∈ xs := by
  simp

/-! ### finIdxOf?

The verification API for `finIdxOf?` is still incomplete.
The lemmas below should be made consistent with those for `findFinIdx?` (and proved using them).
-/

theorem idxOf?_eq_map_finIdxOf?_val [BEq α] {xs : Array α} {a : α} :
    xs.idxOf? a = (xs.finIdxOf? a).map (·.val) := by
  simp [idxOf?, finIdxOf?]

@[grind =] theorem finIdxOf?_empty [BEq α] : (#[] : Array α).finIdxOf? a = none := by simp

@[simp, grind =] theorem finIdxOf?_eq_none_iff [BEq α] [LawfulBEq α] {xs : Array α} {a : α} :
    xs.finIdxOf? a = none ↔ a ∉ xs := by
  rcases xs with ⟨xs⟩
  simp [List.finIdxOf?_eq_none_iff, Array.size]

@[simp] theorem finIdxOf?_eq_some_iff [BEq α] [LawfulBEq α] {xs : Array α} {a : α} {i : Fin xs.size} :
    xs.finIdxOf? a = some i ↔ xs[i] = a ∧ ∀ j (_ : j < i), ¬xs[j] = a := by
  rcases xs with ⟨xs⟩
  unfold Array.size at i ⊢
  simp [List.finIdxOf?_eq_some_iff]

@[simp, grind =]
theorem isSome_finIdxOf? [BEq α] [PartialEquivBEq α] {xs : Array α} {a : α} :
    (xs.finIdxOf? a).isSome = xs.contains a := by
  rcases xs with ⟨xs⟩
  simp [Array.size]

@[simp, grind =]
theorem isNone_finIdxOf? [BEq α] [PartialEquivBEq α] {xs : Array α} {a : α} :
    (xs.finIdxOf? a).isNone = !xs.contains a := by
  rcases xs with ⟨xs⟩
  simp [Array.size]

end Array
