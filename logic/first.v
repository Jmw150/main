
(* classically proving forall A : proposition, :wa
  *)
Theorem my_first_proof : (forall cats : Prop, cats -> cats).
Proof.
  intros lol.  (* as in introduce variable into local scope. It is of type Prop here. *)
  intros bear.  (* as in introduce variable into local scope. It is of type lol here. *)
  exact bear. (* as see if the type is the return type *)
Qed.

