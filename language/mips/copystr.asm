.data 
	ex_msg_og: .asciiz "Original string:\n"
	ex_msg_cpy: .asciiz "\nCopied string:\n"
	string: .asciiz "Nice string you got there!\n"
 
.text 
	main:
		la $v1,string #load addr of string into $v0
		la $t1,($v1)  #copy addr into $t0 for later access
		lb $a1,($v1)  #load byte from string addr
	strlen_loop:	
		beqz $a1,alloc_mem
		addi $a0,$a0,1 #increment strlen_counter
		addi $v1,$v1,1 #increment ptr
		lb $a1,($v1)   #load the byte 
		j strlen_loop
 
	alloc_mem:
		li $v0,9 #alloc memory, $a0 is arg for how many bytes to allocate
		         #result is stored in $v0
		syscall
		la $t0,($v0) #$v0 is static, $t0 is the moving ptr
		la $v1,($t1) #get a copy we can increment
	copy_str:
		lb $a1,($t1) #copy first byte from source
 
	strcopy_loop:
		beqz $a1,exit_procedure #check if current byte is NULL
		sb $a1,($t0)            #store the byte at the target pointer
		addi $t0,$t0,1          #increment source ptr
		addi $t1,$t1,1          #decrement source ptr
		lb $a1,($t1)            #load next byte from source ptr
		j strcopy_loop
 
 
	exit_procedure:
		la $a1,($v0) #store our string at $v0 so it doesn't get overwritten
		li $v0,4 #set syscall to PRINT
 
		la $a0,ex_msg_og  #PRINT("original string:")
		syscall
 
		la $a0,($v1)      #PRINT(original string)
		syscall
 
		la $a0,ex_msg_cpy #PRINT("copied string:")
		syscall
 
		la $a0,($a1)      #PRINT(strcopy)
		syscall
 
		li $v0,10         #EXIT(0)
		syscall
 
