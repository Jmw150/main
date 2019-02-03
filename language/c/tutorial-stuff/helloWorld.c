#include <stdio.h> 
/* a standard io library must be included for terminal interaction. It follows the philosophy of "don't pay for what you don't use". But the sad thing is this gives the illusion that C is a lot smaller than it actually is. So writing a compiler for C to a machine language involves also writing machine code for every C function defined by the standard. This is not as bad as python but it still means writting a few hundred functions like the bezzel and cosine functions.
*/
                   

/* int */
main() 
/* int is actually guessed if not stated, gcc gives warnings though.
 void main is still not ANSI C. */
{
    printf("Hello World!\b\n");

    /* notice that return is also guessed if not stated
    // this time without an error
    // \b means backspace in the sense that it deletes a character */
}
