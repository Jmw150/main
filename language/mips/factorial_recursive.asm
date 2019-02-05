#reference code
#int factorialRec(int n){
#    if(n<2){return 1;}
#    else{ return n*factorial(n-1);}
#}
.data
	n:	.word 5
	result:	.word
.text
main:
	la	$t0, n
	lw	$a0, 0($t0)
	jal	factorialRec
	la	$t0, result
	sw	$v0, 0($t0)
	addi	$v0, $0, 10
	syscall	
 
factorialRec:
	addi	$sp, $sp, -8	#calling convention
	sw	$a0, 0($sp)
	sw	$ra, 4($sp)
 
	addi	$t0, $0, 2	#if (n < 2) do return 1 
	slt	$t0, $a0, $t0	#else return n*factorialRec(n-1)
	beqz	$t0, anotherCall
 
	lw	$ra, 4($sp)	#recursive anchor
	lw	$a0, 0($sp)
	addi	$sp, $sp, 8
	addi	$v0, $0, 1
	jr	$ra
 
anotherCall:
	addi	$a0, $a0, -1
	jal	factorialRec
 
	lw	$ra, 4($sp)
	lw	$a0, 0($sp)
	addi	$sp, $sp, 8
	mul	$v0, $a0, $v0
	jr	$ra
 
