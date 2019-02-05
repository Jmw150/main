# code snippid, tells if a number is even or odd.

    .data
even_str: .asciiz "Even"
odd_str: .asciiz "Odd"

    .text
    #set syscall to get integer from user
    li      $v0,5
    syscall

    #perform bitwise AND and store in $a0
    and     $a0,$v0,1

    #set syscall to print dytomh
    li      $v0,4

    #jump to odd if the result of the AND operation
    beq     $a0,1,odd
even:
    #load even_str message, and print
    la      $a0,even_str
    syscall

    #exit program
    li      $v0,10
    syscall

odd:
    #load odd_str message, and print
    la      $a0,odd_str
    syscall
 
    #exit program
    li      $v0,10
    syscall
