(* Simple proof to show how coq works. *)

Theorem A_implies_A : (forall A : Prop, A -> A).

Proof.
    intros A.
    intros proof_of_A.
    exact proof_of_A.
Qed.
