set_option tactic.simp.trace true
set_option trace.Meta.Tactic.simp.rewrite true

-- These lemmas were subsequently added to the simp set and confuse the test.
attribute [-simp] Nat.add_left_cancel_iff Nat.add_right_cancel_iff Nat.sub_eq_zero_of_le Nat.add_eq_left Nat.add_eq_right

def f (x : α) := x

example (a : α) (b : List α) : f (a::b = []) = False :=
  by simp [f]

def length : List α → Nat
  | []    => 0
  | a::as => length as + 1

example (a b c : α) (as : List α) : length (a :: b :: as) > length as := by
  simp [length]
  apply Nat.lt.step
  apply Nat.lt_succ_self

def fact : Nat → Nat
  | 0 => 1
  | x+1 => (x+1) * fact x

theorem ex3 : fact x > 0 := by
  induction x with
  | zero => decide
  | succ x ih =>
    simp [fact]
    apply ih

def head [Inhabited α] : List α → α
  | []   => default
  | a::_ => a

example [Inhabited α] (a : α) (as : List α) : head (a::as) = a :=
  by simp [head]

def foo := 10

example (x : Nat) : foo + x = 10 + x := by
  simp [foo]
  done

def g (x : Nat) : Nat := Id.run <| do
  let x := x
  return x

example : g x = x := by
  simp [g, bind, pure]
  rfl

def f1 : StateM Nat Unit := do
  modify fun x => g x

def f2 : StateM Nat Unit := do
  let s ← get
  set <| g s

-- Note: prior to PR #2489, the `Try this` suggestion reported by this `simp`
-- call was incomplete.
example : f1 = f2 := by
  simp (config := {unfoldPartialApp := true}) [f1, f2, bind, StateT.bind, get, getThe, MonadStateOf.get, StateT.get, pure, set, StateT.set, modify, modifyGet, MonadStateOf.modifyGet, StateT.modifyGet]

def h (x : Nat) : Sum (Nat × Nat) Nat := Sum.inl (x, x)

def bla (x : Nat) :=
  match h x with
  | Sum.inl (y, z) => y + z
  | Sum.inr _ => 0

example (x : Nat) : bla x = x + x := by
  simp [bla, h]

example (x : Nat) (h : 1 ≤ x) : x - 1 + 1 + 2 = x + 2 := by
  simp [h, Nat.sub_add_cancel]

example (x : Nat) : (if h : 1 ≤ x then x - 1 + 1 else 0) = (if _h : 1 ≤ x then x else 0) := by
  simp (config := {contextual := true}) [h, Nat.sub_add_cancel]

theorem my_thm : a ∧ a ↔ a := ⟨fun h => h.1, fun h => ⟨h, h⟩⟩

example : a ∧ (b ∧ b) ↔ a ∧ b := by simp [my_thm]
example : (a ∧ (b ∧ b)) = (a ∧ b) := by simp only [my_thm]

example : x - 1 + 1 = x := by simp (discharger := sorry) [Nat.sub_add_cancel]

-- The following examples test simplification at hypotheses.
section

-- Two simp lemmas applied to one hypothesis.
example (h' : bla x = x) : x + x = x := by
  simp [bla, h] at *
  exact h'

-- Ditto, but simplifying the hypothesis explicitly.
example (h' : bla x = x) : x + x = x := by
  simp [bla, h] at h'
  exact h'

-- Various simp lemmas applied to different hypotheses, but each lemma is
-- applied to exactly one hypothesis.
example {α : Type} (xs ys : List α) (h₁ : bla x = y) (h₂ : (xs ++ ys).length = y) : x = length xs := by
  simp [bla, h, List.length_append] at *

-- Ditto, but with an additional unused lemma.
example {α : Type} (xs ys : List α) (h₁ : bla x = y) (h₂ : (xs ++ ys).length = y) : x = length xs := by
  simp [bla, h, List.length_append, Nat.add_one] at *

-- Two simp lemmas applied to two hypotheses, with each lemma applied to both
-- hypotheses.
example (h' : bla x = x) (_ : bla y = y) : x + x = x := by
  simp [bla, h] at *
  exact h'

-- Two simp lemmas applied to both a hypothesis and the target.
example (h' : bla x = x) : bla x = x := by
  simp [bla, h] at *
  exact h'

end

-- This example tests tracing of class projections.

class HasProp (A) where
  toProp : A → Prop

instance : HasProp Nat where
  toProp _ := True

example : HasProp.toProp 0 := by
  simp [HasProp.toProp]

example (P Q : Prop) (h : P ↔ Q) (p : P) : Q := by
  simp [← h]
  exact p

theorem my_thm' : a ↔ a ∧ a := my_thm.symm

example (P : Prop) : P ∧ P ↔ P := by simp only [← my_thm']

example {P : Prop} : P → P := by intro h; simp [*]

example {P : Prop} : P → P := by intro; simp [*]

-- `simp_all only [h]`, where `h` is a local hypothesis, is redundant and
-- misleading since `simp_all` uses all local hypotheses anyway. `simp_all?`
-- should therefore omit hypotheses from the suggested theorem list.

example {P : Nat → Type} (h₁ : n = m) (h₂ : P m) : P n := by
  simp_all
  exact h₂

example {Q : ∀ {n m : Nat}, n = m → Prop} {P : Nat → Type} (h₁ : n = m) (h₂ : P m) (h₃ : Q h₁) : P n := by
  simp_all
  exact h₂
