    .global _start          /* .__ is an instruction to the assembler
                               .global makes the jump spot availible
                               outside the file, if other files are 
                               linked with it
                            */

    .text                   /* tells assembler where to start. It 
                               will just guess if you do not tell it.
                            */

_start:
    mov     $1, %rax        /* move data from number 1 to register rax
                               registers are always global so space
                               does not need to be reserved.
                               related to terminal output somehow
                            */
    mov     $1, %rdi        /* seems uneeded */
    mov     $hello, %rsi    /* move data from hello to register rsi */
    mov     $13, %rdx       /* move data from 13 to register rdx
			                   used to tell the length of rsi string 
                            */
    syscall                 /* I think this is a software interrupt */

    mov     $60, %rax       /* needed to not segfault, why 60? */
    xor     %rdi, %rdi      /* seem uneeded */
    syscall

.data                       /* personally prefer to have .data here */
/* a label for data */
hello:
    .ascii  "Hello, world\n" /* .ascii says this string is in ascii */

/* registers:
   rax  r and x = 64 bit, a = accumulator
   rdi  = destination
   rsi  = source
   rdx  = data
*/
