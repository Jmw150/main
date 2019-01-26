#!/usr/bin/spim -file

# this file is for common functions

# executing code from the command line uses these conventions
# $a0 = argc, $a1 = argv
# 4*n($a1) is the nth command 

    .text                       ## Assembly language instructions go in text segment
main:                           ## Start of code section, 
                                # spim forces this
    lw      $a0, 4($a1)         # get second command line argv
    li      $v0, 4              # print code for the argument (string)
    syscall                # tells system to print
    li $v0, 10              # exit code
    syscall                # terminate cleanly



# read_str() -> $s0
# reads a string (max 1024 bytes) 
read_str:
.data
string_space: .space 1024 # set aside 1024 bytes for the string.

.text
    la      $a0, string_space   # pointer of string
    li      $a1, 1024           # space allocated on str pointer
    
    li      $v0, 8              # 'read a string' code
    syscall
    
    add     $s0,$a0,$0          # save in standard place

    j       return
# end read_str


# print_str(string $a0) 
# prints a string
print_str: 
    # a0 should already have str that syscall(4) wants
    li      $v0, 4              # print str
    syscall
    j       return
# end print_str

# return()
# return to main previous function call, (or $ra location)
return:
    jr      $ra                 # jump back to previous function
# end return

# exit program
exit:
    li      $v0,10              # v0 is the syscall pointer
    syscall                     # syscall 10 == exit program
# end exit


# say_input_str(), prompt user to input message
say_input_str:
    .data
prompt_str: .asciiz "enter a str -> "     
    .text
    li      $v0, 4              
    la      $a0, prompt_str     
    syscall                     
    jr      $ra                 

# say_hello(), say "Hello, World!\n"
say_hello:    
.data
hello_world:.asciiz "Hello, World!\n"     ## how to store strings in a file
.text
    li      $v0, 4              # system call code for printing string = 4
    la      $a0, hello_world    # load address of string to be printed into $a0
    syscall                     # call operating system to perform operation
                                # specified in $v0
                                # syscall takes its arguments from $a0, $a1, ...
    jr      $ra                 # return to main




# Standard startup code.  Invoke the routine "main" with arguments:
#	main(argc, argv, envp)
#
    .text
    lw      $a0 0($sp)          # argc
    addiu   $a1 $sp 4           # argv
    addiu   $a2 $a1 4           # envp
    sll     $v0 $a0 2
    addu    $a2 $a2 $v0
    jal     main


print_ran:
    li      $v0, 4              # $system call code for print_str
    la      $a0, str            # $address of string to print
    syscall                     # print the string

    li      $v0, 1              # $system call code for print_int
    li      $a0, 5              # $integer to print
    syscall                     # print it

    jr $ra

    
    .data                       ## Data declaration section, labels here 


str:.asciiz "the answer = "

#Service	System Call Code	Arguments	Result
#print integer	1	$a0 = value	(none)
#print float	2	$f12 = float value	(none)
#print double	3	$f12 = double value	(none)
#print string	4	$a0 = address of string	(none)
#read integer	5	(none)	$v0 = value read
#read float	6	(none)	$f0 = value read
#read double	7	(none)	$f0 = value read
#read string	8	$a0 = address where string to be stored
#$a1 = number of characters to read + 1	(none)
#memory allocation	9	$a0 = number of bytes of storage desired	$v0 = address of block
#exit (end of program)	10	(none)	(none)
#print character	11	$a0 = integer	(none)
#read character	12	(none)	char in $v0
