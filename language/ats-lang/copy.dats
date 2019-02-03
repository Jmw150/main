fun fcopy (inp: FILEref , out: FILEref) : void = let
  val c = fileref_getc (inp)
in
  if c >= 0 then let
    val () = fileref_putc (out, c) in fcopy (inp, out)
  end // end of [if]
end (* end of [fcopy] *)