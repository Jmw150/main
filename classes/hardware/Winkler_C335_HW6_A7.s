# Name: Jordan Winkler
# Date: 3/20/2019
# File Name: Winkler_C335_HW6_A7.s
# Program Use: add largest 2 of three numbers
# Problem Description: 
#   Using SPIM, write and test a program that reads in three integers and prints out the sum of the largest two of the three. Use the SPIM system calls described on pages A-43 and A-45. You can break ties arbitrarily. 

################# Data segment #####################
    .data

sum_top2_prompt: .asciiz "input int -> "
sum_top2_pre_ans: .asciiz "sum of top 2 ints -> "
sum_top2_newline:.asciiz "\n"
################# Code segment #####################
    .text

main:
    jal     get_int             # read in 3 integers
    move    $t0, $v0            # |
    jal     get_int             # |
    move    $t1, $v0            # |
    jal     get_int             # |
    move    $t2, $v0            # |

    slt     $t3, $t0, $t1       # three checks, in order
    slt     $t4, $t1, $t2       # a < b, b < c, a < c
    slt     $t5, $t0, $t2       # |

    # 8 branches, organized into 3 jumps
    # Ties don't need consideration, because 
    #   answer is by value not register.
    #
    # 000 -> 0 |- (a > b > c, a > c) -> 110
    # 001 -> 1 |- (a > b > c, a < c) -> not possible
    # 010 -> 2 |- (a > b, c > b, a < c) -> (c > a > b) -> 101
    # 011 -> 3 |- (a > b, b < c, a < c) -> (c > a > b) -> 101
    # 100 -> 4 |- (a < b, b > c, a > c) -> (b > a > c) -> 110
    # 101 -> 5 |- (a < b, b > c, a < c) -> (b > c > a) -> 011
    # 110 -> 6 |- (a < b < c, a > c) -> not possible
    # 111 -> 7 |- (a < b < c, a < c) -> 011
    #
    # three valid output types 
    # 110 : 000, 100 or 0, 4
    # 101 : 010, 011 or 2, 3
    # 011 : 101, 111 or 5, 7

    sll     $t4, $t4, 1         # pack logic into single register
    sll     $t5, $t5, 2         # |
    add     $t4, $t4, $t5       # |
    add     $t3, $t3, $t4       # |

    beq     $t3, $0, ab_win     # dispatch, or switch statement
    li      $t4, 4              # |
    beq     $t3, $t4, ab_win    # |
    li      $t4, 2              # |
    beq     $t3, $t4, ac_win    # |
    li      $t4, 3              # |
    beq     $t3, $t4, ac_win    # |
    li      $t4, 5              # |
    beq     $t3, $t4, bc_win    # |
    li      $t4, 7              # |
    beq     $t3, $t4, bc_win    # |

ab_win:                         # print a+b
    add     $t0, $t0, $t1       # |
    j       print               # |

ac_win:                         # print a+c
    add     $t0, $t0, $t2       # |
    j       print               # |

bc_win:                         # print b+c
    add     $t0, $t1, $t2       # |
    j       print               # |
    
print:
    la      $a0, sum_top2_pre_ans # describe what will be printed
    li      $v0, 4              # |
    syscall                     # |

    move    $a0, $t0            # print total
    li      $v0, 1              # |
    syscall                     # |

    la      $a0, sum_top2_newline # print "\n"
    li      $v0, 4              # |
    syscall                     # |

    li      $v0, 10             # exit
    syscall                     # |

get_int:
    la      $a0, sum_top2_prompt# describe what will be printed
    li      $v0, 4              # |
    syscall                     # |

    li      $v0, 5              # read_int
    syscall                     # |
    jr      $ra                 # jump back to previous function
