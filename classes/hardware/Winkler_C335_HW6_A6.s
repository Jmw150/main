# Name: Jordan Winkler
# Date: 3/20/2019
# File Name: Winkler_C335_HW6_A6.s
# Program Use: Adds integer input until receiving 0 from user
# Problem Description: 
#   Using SPIM, write and test an adding machine program that repeatedly reads in integers and adds them into a running sum. Th e program should stop when it gets an input that is 0, printing out the sum at that point. Use the SPIM system calls described on pages A-43 and A-45.
################# Data segment #####################
    .data

sum_prompt: .asciiz "Input int -> "
sum_prefix_ans: .asciiz "Sum of ints -> "
sum_newline:.asciiz "\n"
################# Code segment #####################
    .text

main:                            
    move    $t0, $0             # total = 0, to be printed later
sum_loop: 
    la      $a0, sum_prompt     # print prompt
    li      $v0, 4              # |
    syscall                     # |
    li      $v0, 5              # get integer from terminal
    syscall                     # |
    
    beq     $v0, $0, sum_print  # go to print if given 0
    add     $t0, $t0, $v0       # else, total += input
    j       sum_loop            # and get another int
    
sum_print:
    la      $a0, sum_prefix_ans # describe what will be printed
    li      $v0, 4              # |
    syscall                     # |

    move    $a0, $t0            # print total
    li      $v0, 1              # |
    syscall                     # |

    la      $a0, sum_newline    # print "\n"
    li      $v0, 4              # |
    syscall                     # |

    li      $v0, 10             # exit
    syscall                     # |
