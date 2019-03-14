Theorem plus_id : forall n m:nat,
    n = m ->
    n + n = m + m.

Proof.
    intros n m.
    intros H.
    rewrite -> H.
    reflexivity. 
Qed.
