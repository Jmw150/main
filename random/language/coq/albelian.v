Require Import HomotopyDefinitions. (* which I don't have yet *)

(* 
  An adaptation to Coq of Dan Licata's Agda proof that the higher
  homotopy groups are abelian, by Jeremy Avigad.

  This file depends on the very nice library in the
  "UnivalentFoundations" directory of Andrej Bauer's Github
  repository. Run "make" in that directory and put this file there, 
  or set your loadpath accordingly.

  The code is written for Coq 8.3, which means that variables are
  introduced automatically.  
*)

Implicit Arguments homotopy_concat [A x y z p p' q q'].
Implicit Arguments idpath_left_unit [A x y].
Implicit Arguments idpath_right_unit [A x y].

Lemma map2 {A B C} {x x' : A} {y y' : B} (f : A -> B -> C) 
  (p : x ~~> x') (p' : y ~~> y') : (f x y) ~~> (f x' y').
Proof. induction p; induction p'; trivial. Defined.

(* The next four lemmas are needed to prove the left and right identity 
   laws, generalizing those laws to path spaces. *)

Lemma adjust_l {A} {x y : A} {p q : x ~~> y} (R : p ~~> q) :
  idpath x @ p ~~> idpath x @ q.
Proof. exact (idpath_left_unit p @ R @ !(idpath_left_unit q)). Defined.
(* induction R doesn't given a term that is explicit enough. *)

Lemma homotopy_concat_id_left {A} {x y : A} {p p' : x ~~> y} 
  (R : p ~~> p') : homotopy_concat (idpath (idpath x)) R ~~> adjust_l R.
Proof. induction R; induction x0; trivial. Defined.

Lemma adjust_r {A} {x y: A} {p q : x ~~> y} (R : p ~~> q) :
  p @ idpath y ~~> q @ idpath y.
Proof. exact (idpath_right_unit p @ R @ !(idpath_right_unit q)). Defined.

Lemma homotopy_concat_id_right {A} {x y : A} {p p' : x ~~> y} 
 (R : p ~~> p') : homotopy_concat R (idpath (idpath y)) ~~> adjust_r R.
Proof. induction R; induction x0; trivial. Defined.

Lemma concat_interchange {A} {x y z : A} {p q r : x ~~> y} {p' q' r' : y ~~> z}
  {R : p ~~> q} {S : q ~~> r} {T : p' ~~> q'} {U : q' ~~> r'} :
  homotopy_concat (R @ S) (T @ U) ~~> 
    (homotopy_concat R T) @ (homotopy_concat S U).
Proof. 
  induction R; induction S; induction T; induction U. 
  induction x0; induction x1; trivial.
Defined.

(* Here is the standard proof. It is phrased in terms of Pi_2, 
   but instantiating "A" and "base" accordingly yields the corresponding
   result for any n >= 2. *)

Section Pi2_Abelian.

Variables (A : Type) (base : A).

Definition Pi1 := (base ~~> base).
Definition Pi2 := (idpath base) ~~> (idpath base).

Notation "p @@ q" := (homotopy_concat p q) (at level 60).
Notation "[id]" := (idpath (idpath base)).

Lemma comp_left_unit {p : Pi2} : [id] @@ p ~~> p.
Proof. 
  apply (concat (homotopy_concat_id_left p)).
  path_via (p @ [id]); apply idpath_left_unit.
Defined.

Lemma comp_right_unit {p : Pi2} : p @@ [id] ~~> p.
  apply (concat (homotopy_concat_id_right p)).
  path_via (p @ [id]); apply idpath_left_unit.
Defined.

Lemma comp_interchange  {a b c d : Pi2} : 
  (a @ b) @@ (c @ d) ~~> (a @@ c) @ (b @@ d).
Proof. exact concat_interchange. Defined.

Lemma comp_same {a b : Pi2} : a @ b ~~> a @@ b.
Proof.
  path_via ((a @@ [id]) @ b). apply (!comp_right_unit). 
  path_via ((a @@ [id]) @ ([id] @@ b)). apply (!comp_left_unit).
  path_via ((a @ [id]) @@ ([id] @ b)). apply (!comp_interchange).
  path_via (a @@ ([id] @ b)). 
    apply map2; [apply idpath_right_unit | apply idpath].
  apply map2; [apply idpath | apply idpath_left_unit].
Defined.

(* Here path_via calls path_tricks, which decomposes "_ @ _ = _ @ _" 
   too aggressively. *)
Lemma Pi2_abelian {a b : Pi2} : a @ b ~~> b @ a.
Proof.
  apply @concat with (y := ([id] @@ a) @ b). 
    path_tricks; apply (!comp_left_unit).
  apply @concat with (y := ([id] @@ a) @ (b @@ [id])). 
    path_tricks; apply (!comp_right_unit).
  apply (concat (!comp_interchange)); apply (concat (!comp_same)); path_tricks. 
Defined.

End Pi2_Abelian.