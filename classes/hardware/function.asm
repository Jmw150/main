#!/home/jordan/Backup/scripts/Mars4_5.jar nc

# this file is a test bed and storage place for mips functions

#.macro  print_integer $arg
    # print_int($a0) 
    addi    $a0, $0, 5
    li      $v0, 1              
    syscall
#    .end_macro

main: #($a0 = argc, $a1 = argv), 4*n($a1) = nth command 
#    lw      $a0, 4($a1)         # get first command line argv
#.include "test.asm" #mov $0, $0
    addi    $t0, $0, 5 
#    print_integer $t0
    j       exit

    

# functions made:
# exit, return, read str, print str, prompt for str, say hello, main(argc,args), strlen

# functions still to implement
# tag_exists, open file, read from file, print to file, close file, read char file, read char

# $s0 = read_str() 
# reads a string (max 1024 bytes) 
read_str:
.data
string_space: .space 1024 # set aside 1024 bytes for the string.

.text                       ## Assembly language instructions go in text segment
    la      $a0, string_space   # pointer of string
    li      $a1, 1024           # space allocated on str pointer
 #   string  = 8                 # apparently this is legal (but only in spim)
    li      $v0, 8              # 'read a string' code
    syscall
    
    add     $s0,$a0,$0          # save in standard place

    j       return
# end read_str


# print_int($a0) 
print_int: 
    li      $v0, 1              
    syscall
    j       return
# end print_int


# print_float($f12) 
print_float: 
    li      $v0, 2
    syscall
    j       return
# end print_float

# print_double($f12) 
print_double: 
    li      $v0, 3
    syscall
    j       return
# end print_double

# print_str(string $a0) 
# prints a string
print_str: 
    # a0 should already have str that syscall(4) wants
    li      $v0, 4              # print str
    syscall
    j       return
# end print_str

# $v0 = read_int()
read_int:
    li      $v0, 5
    syscall
    j       return
# end read_int

# $f0 = read_float()
read_float:
    li      $v0, 6
    syscall
    j       return
# end read_float

# $f0 = read_double()
read_double:
    li      $v0, 7
    syscall
    j       return
# end read_double

# read_string(a0=buffer,a1=length)
read_string:
    li      $v0, 8
    syscall
    j       return
# end read_string

# v0 = read_char()
read_char:
    li      $v0, 12
    syscall
    j       return
# end read_char


# print_char(a0)
print_char:
    li      $v0, 11
    syscall
    j       return
# end print_char

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


# prompt_for_str(), prompt user to input message
prompt_for_str:
    .data
prompt_str: .asciiz "enter a str -> "     
    .text
    li      $v0, 4              
    la      $a0, prompt_str     
    syscall                     
    jr      $ra                 

# say_hello_world(), say "Hello, World!\n"
say_hello_world:    
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




strlen:
    li      $t0, 0              # initialize the count to zero
strlen_loop:
    lbu     $t1, 0($a0)         # load the next character into t1
    beqz    $t1, return      # check for the null character
    addi    $a0, $a0, 1         # increment the string pointer
    addi    $t0, $t0, 1         # increment the count
    j       strlen_loop                # return to the top of the loop

    j return


max:
    lw      $t0, 0($a0)         # load the first array value into t0
    li      $t1, 1              # initialize the counter to one
max_loop:
    beq     $t1, $a1, return      # exit if we reach the end of the array
    addi    $a0, $a0, 4         # increment the pointer by one word
    addi    $t1, $t1, 1         # increment the loop counter
    lw      $t2, 0($a0)         # store the next array value into t2
    ble     $t2, $t0, max_end_if
    move    $t0, $t2            # found a new maximum, store it in t0
max_end_if:
    j       max_loop                # repeat the loop

    j return
    
    

# Description: Program accepts numbers from user and adds them together, terminates at input of 0
# Input: User enter numbers
# Output: Sum of numbers entered
################# Data segment #####################
.data

sum_inputString: .asciiz "Input a number: "
sum_outputString: .asciiz "Total sum of numbers: "
sum_newline:.asciiz "\n"
################# Code segment #####################
.text

sum:
    add     $s1, $zero, $zero   # Initialize $s1 to zero - reserved for our total sum

sum_Loop: li   $v0, 4             # Load system call to print input string
    la      $a0, sum_inputString# Load input string for printing
    syscall
    
    li      $v0, 5              # Load system call to read number from user
    syscall
    
    add     $s1, $s1,   $v0     # Add number to total sum
    bne     $v0, $zero, sum_Loop# Loop if last number wasn't 0
      
    li      $v0, 4              # Load system call to print output string
    la      $a0, sum_outputString # Load output string for printing
    syscall
      
    li      $v0, 1              # Load system call to print string
    add     $a0, $s1, $zero     # Load sum into $a0 for printing
    syscall

    li      $v0, 4              # Load system call to print output string
    la      $a0, sum_newline    # Load output string for newline
    syscall

    j       return




# Description: Displays the moves needed to solve the puzzle of the towers of Hanoi
# Input: Number of rings
# Output: Steps for solving the problem
################# Data segment #####################
.data

hanoi_requestInput: .asciiz "Enter number of disks: "
hanoi_moveDisk:     .asciiz "Move disk "
hanoi_fromPeg:      .asciiz " from peg "
hanoi_toPeg:        .asciiz " to peg "
hanoi_newline:      .asciiz "\n"
################# Code segment #####################
.text

# Variable Key:
# $a0 = n
# $a1 = start
# $a2 = finish
# $a3 = extra

hanoi:
       li $v0, 4              # Load number for system call for printing string
       la $a0, hanoi_requestInput   # Load string
       syscall
    
       li $v0, 5              # Load number for system call for reading number in
       syscall
    
       addi $a0, $v0,   0     # Put user number in $a0
       addi $a1, $zero, 1     # Put 1 in start
       addi $a2, $zero, 2     # Put 2 in finish
       addi $a3, $zero, 3     # Put 3 in extra
    
       jal  hanoi_r
       j    hanoi_Leave

hanoi_r: addi $sp, $sp, -20     # Make room in stack
       sw   $ra, 16($sp)      # Store returning address
       sw   $a0, 12($sp)      # Store n
       sw   $a1, 8($sp)       # Store start
       sw   $a2, 4($sp)       # Store finish
       sw   $a3, 0($sp)       # Store extra

       slti $t0, $a0,   1     # Test base case
       beq  $t0, $zero, hanoi_Skip  # As long as n > 0, call recursively
       addi $sp, $sp,   20    # If n = 0, adjust stack pointer and begin backtracing
       jr   $ra  

hanoi_Skip:  addi $a0, $a0, -1      # Decrement n

       add  $t0, $a2, $zero   # Temp holder for $a1 for swapping proceedure next
       add  $a2, $a3, $zero   # Swap
       add  $a3, $t0, $zero   # Swap
       jal  hanoi_r             # Recursive call
       
       lw   $a3, 0($sp)       # Load Extra
       lw   $a2, 4($sp)       # Load Finish
       lw   $a1, 8($sp)       # Load start
       lw   $a0, 12($sp)      # Load n
       lw   $ra, 16($sp)      # Load returning address
       addi $sp, $sp, 20      # Adjust stack pointer
       
       add  $t0, $a0, $zero   # Back up n temporarily
       
       li   $v0, 4            # Load number for system call for printing string
       la   $a0, hanoi_moveDisk     # Load string
       syscall
    
       li   $v0, 1            # Load number for system call for print number
       add  $a0, $t0, $zero   # Move $a0 for printing
       syscall
       
       li   $v0, 4            # Load number for system call for printing string
       la   $a0, hanoi_fromPeg      # Load string
       syscall
    
       li   $v0, 1            # Load number for system call for print number
       add  $a0, $zero, $a1   # Move $a1 for printing
       syscall
       
       li   $v0, 4            # Load number for system call for printing string
       la   $a0, hanoi_toPeg        # Load string
       syscall
    
       li   $v0, 1            # Load number for system call for print number
       add  $a0, $zero, $a2   # Move $a2 for printing
       syscall
       
       li   $v0, 4            # Load number for system call for printing string
       la   $a0, hanoi_newline      # Load string
       syscall
       
       add  $a0, $t0, $zero   # recover n
       addi $a0, $a0, -1      # Decrement n
       
       add  $t0, $a1, $zero   # Temp holder for $a1 for swapping proceedure next
       add  $a1, $a3, $zero   # Swap
       add  $a3, $t0, $zero   # Swap
       j    hanoi_r             # Recursive call
       
       jr   $ra
hanoi_Leave:
    j exit







# 4. Find the shortest sequence of MIPS instructions that extracts the 18-bit field in locations 5 through 22 (bit position 31 is the MSB) from register \$t3 and places it in register \$t0. Hint: Use shift instructions. \\
    # extract 5-22 bit postion from t3
    sll     $t0, $t3, 10 # take off top,    32 = 22+10
    srl     $t0, $t0, 15 # take off bottom, -5 = 10-15

# hw5.6
# if ((a < b) && (c == 0))
#   d = 1;
# a,  b,  c,  d,  i,  x
# t1, t2, t3, t4, s0, s1
#
if: #if ((a < b) && (c == 0)) d = 1;
    slt     $t0, $t1, $t2       # a <  b
    seq     $t8, $t1, $0        # c == 0
    and     $t0, $t0, $t8       # (a <  b) && (c == 0)
    beq     $t0, $0, skip       # if ((a < b) && (c == 0)) 
    addi    $t4, $0, 1          #   d = 1;
skip:


# hw5.1
# translate some c code to mips
# for (i = 0; i < x; i=i+1) 
#    y = y + i;
# $s0 = i, $s1 = x, $s2 = y
# required: use slt
for:                            # for (i = 0; i < x; i=i+1) y = y + i;
    add     $s0, $0, $0         # i=0
for_loop:
    slt     $t0, $s0, $s1       # (i < x) ? 1 : 0
    beq     $t0, $0, endfor     # exit if (i < x)
    add     $s2, $s2, $s0       # y = y + i
    addi    $s0, $s0, 1         # i = i + 1
    j       for_loop
endfor:
    add     $a0, $0, $s2
    j       print_int
    j       exit

# 3. Translate the following MIPS code to C. Assume that the variables f, g, h, i, and j are assigned to registers \$s0, \$s1, \$s2, \$s3, and \$s4, respectively. Assume that the base address of the arrays A and B are in registers \$s6 and \$s7, respectively. \\

