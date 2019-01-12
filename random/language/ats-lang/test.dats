#include "lib.hats" // how to put 

fun fib (n: int) : int = 
  if n >= 2 then fib(n-2) + fib(n-1) else n
// end of [fib]

implement main0 () = print(fib(5))