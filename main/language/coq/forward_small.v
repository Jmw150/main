Theorem forward_small : (forall A B : Prop, A -> (A -> B) -> B).
(* python-like documentation, goes here *)
Proof.
    intros A.
    intros B.
    intros proof_of_A.
    intros A_implies_B.
    pose (proof_of_B := A_implies_B proof_of_A).
    exact proof_of_B.
Qed.



Theorem A_implies_A : (forall A : Prop, A -> A).
(* Simple proof to show how coq works. *)
Proof.
    intros A.
    intros proof_of_A.
    exact proof_of_A.
Qed.
