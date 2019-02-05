# This example reads an integer from user, stores in register a1
# Then, it uses a0 as a multiplier and target, it is set to 1
 
# Pseudocode:
# a0 = 1
# a1 = read_int_from_user()
# while(a1 > 1)
# {
# a0 = a0*a1
# DECREMENT a1
# }
# print(a0)
 
.text ### PROGRAM BEGIN ###
	### GET INTEGER FROM USER ###
	li $v0, 5 #set syscall arg to READ_INTEGER
	syscall #make the syscall
	move $a1, $v0 #int from READ_INTEGER is returned in $v0, but we need $v0
	              #this will be used as a counter
 
	### SET $a1 TO INITAL VALUE OF 1 AS MULTIPLIER ###
	li $a0,1
 
	### Multiply our multiplier, $a1 by our counter, $a0 then store in $a1 ###
loop:	ble $a1,1,exit # If the counter is greater than 1, go back to start
	mul $a0,$a0,$a1 #a1 = a1*a0
 
	subi $a1,$a1,1 # Decrement counter
 
	j loop # Go back to start
 
exit: 
	### PRINT RESULT ###
	li $v0,1 #set syscall arg to PRINT_INTEGER
	#NOTE: syscall 1 (PRINT_INTEGER) takes a0 as its argument. Conveniently, that
	#      is our result. 
	syscall  #make the syscall
 
	#exit
	li $v0, 10 #set syscall arg to EXIT
	syscall #make the syscall
 
