# Read and echo file on a character by character basis
# David A. Reimann
# April 2008

	.text
main:

# Open File

	li	$v0, 13			# 13=open file
	la	$a0, file		# $a2 = name of file to read
	add	$a1, $0, $0		# $a1=flags=O_RDONLY=0
	add	$a2, $0, $0		# $a2=mode=0
	syscall				# Open FIle, $v0<-fd
	add	$s0, $v0, $0	# store fd in $s0




# Read 4 bytes from file, storing in buffer

	li	$v0, 14			# 14=read from  file
	add	$a0, $s0, $0	# $s0 contains fd
	la	$a1, buffer		# buffer to hold int
	li	$a2, 4			# Read 4 bytes
	syscall

	li	$v0, 11			# 11=print char
	lw	$a0, buffer		# buffer contains the char
	syscall				# print int


# Close File

done:
	li	$v0, 16			# 16=close file
	add	$a0, $s0, $0	# $s0 contains fd
	syscall				# close file


# Exit Gracefully
exit:
	li	$v0, 10
	syscall



	.data
file:
	.asciiz "/home/jordan/Backup/nonsensitive/test_ground/test.txt" # File name
	.word	0
buffer:	
	.space	4			# Place to store character
