/* This is boilerplate for int main() {return 0;} */	
/* add whatever to the main body and compile using */
/* gcc -o ${1%.s} -m64 $1  */

    .file	"template.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
    /* put code in here */

 
    /* code should end here */
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Debian 6.3.0-18) 6.3.0 20170516"
	.section	.note.GNU-stack,"",@progbits

# if you want to use data put it here 
/*
.data                       
# a label for data 
hello:
    .ascii  "Hello, world\n" # .ascii says this string is in ascii
*/
