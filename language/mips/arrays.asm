	.data
array:	.word	1, 2, 3, 4, 5, 6, 7, 8, 9 # creates an array of 9 32 Bit words. 
 
	.text
main:	la 	$s0, array
	li	$s1, 25
	sw	$s1, 4($s0)	# writes $s1 (25) in the second array element
# the four counts thi bytes after the beginning of the address. 1 word = 4 bytes, so 4 acesses the second element 
 
	lw	$s2, 20($s0)	# $s2 now contains 6	
 
	li	$v0, 10		# end program
	syscall
