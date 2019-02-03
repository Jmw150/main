	.file	"pi.c"
	.section	.rodata
.LC0:
	.string	"%.4d"
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
	subq	$11248, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -11224(%rbp)
	movl	$0, -11236(%rbp)
.L3:
	cmpl	$2799, -11236(%rbp)
	jg	.L2
	movl	-11236(%rbp), %eax
	cltq
	movl	$2000, -11216(%rbp,%rax,4)
	addl	$1, -11236(%rbp)
	jmp	.L3
.L2:
	movl	$2800, -11232(%rbp)
.L8:
	cmpl	$0, -11232(%rbp)
	jle	.L4
	movl	$0, -11228(%rbp)
	movl	-11232(%rbp), %eax
	movl	%eax, -11236(%rbp)
.L7:
	movl	-11236(%rbp), %eax
	cltq
	movl	-11216(%rbp,%rax,4), %eax
	imull	$10000, %eax, %eax
	addl	%eax, -11228(%rbp)
	movl	-11236(%rbp), %eax
	addl	%eax, %eax
	subl	$1, %eax
	movl	%eax, -11220(%rbp)
	movl	-11228(%rbp), %eax
	cltd
	idivl	-11220(%rbp)
	movl	-11236(%rbp), %eax
	cltq
	movl	%edx, -11216(%rbp,%rax,4)
	movl	-11228(%rbp), %eax
	cltd
	idivl	-11220(%rbp)
	movl	%eax, -11228(%rbp)
	subl	$1, -11236(%rbp)
	cmpl	$0, -11236(%rbp)
	je	.L12
	movl	-11228(%rbp), %eax
	imull	-11236(%rbp), %eax
	movl	%eax, -11228(%rbp)
	jmp	.L7
.L12:
	nop
	movl	-11228(%rbp), %ecx
	movl	$1759218605, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$12, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	-11224(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	-11228(%rbp), %ecx
	movl	$1759218605, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$12, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	imull	$10000, %eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	movl	%eax, -11224(%rbp)
	subl	$14, -11232(%rbp)
	jmp	.L8
.L4:
	movl	$0, %eax
	movq	-8(%rbp), %rsi
	xorq	%fs:40, %rsi
	je	.L10
	call	__stack_chk_fail
.L10:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
