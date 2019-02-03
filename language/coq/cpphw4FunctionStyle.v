(*
    working with months through coq
    created by: Jordan Winkler
*)

(* Defining the thing *)

Inductive month : Type := 
    | january : month
    | febuary : month
    | march : month
    | april : month
    | may : month
    | june : month
    | july : month
    | august : month
    | september : month
    | october : month
    | november : month
    | december : month.

(* defining a function to use the thing *)

Definition next_month (m:month) : month :=
    match m with
    | january => febuary
    | febuary => march
    | march => april
    | april => may
    | may => june
    | june => july
    | july => august
    | august => september
    | september => october
    | october => november
    | november => december
    | december => january
    end.
    
(* Defining a test of the thing that uses the thing *)

Example test_next_month:
    (next_month january) = febuary.


(* implementing test *)

Proof. simpl. reflexivity. Qed.
