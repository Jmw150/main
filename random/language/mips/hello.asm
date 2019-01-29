
main:   
# Store 'Hello world!' at the top of the stack
    addi    $sp, $sp, -13
    addi    $t0, $zero, 72      # H
    sb      $t0, 0($sp)
    addi    $t0, $zero, 101     # e
    sb      $t0, 1($sp)
    addi    $t0, $zero, 108     # l
    sb      $t0, 2($sp)
    addi    $t0, $zero, 108     # l
    sb      $t0, 3($sp)
    addi    $t0, $zero, 111     # o
    sb      $t0, 4($sp)
    addi    $t0, $zero, 32      # (space)
    sb      $t0, 5($sp)
    addi    $t0, $zero, 119     # w
    sb      $t0, 6($sp)
    addi    $t0, $zero, 111     # o
    sb      $t0, 7($sp)
    addi    $t0, $zero, 114     # r
    sb      $t0, 8($sp)
    addi    $t0, $zero, 108     # l
    sb      $t0, 9($sp)
    addi    $t0, $zero, 100     # d
    sb      $t0, 10($sp)
    addi    $t0, $zero, 33      # !
    sb      $t0, 11($sp)
    addi    $t0, $zero, 10      # \n
    sb      $t0, 12($sp)
    addi    $t0, $zero, 0       # (null)
    sb      $t0, 13($sp)

    addi    $v0, $zero, 4       # 4 is for print string
    addi    $a0, $sp, 0         # throw the stack into the call

    syscall                     # print to the log

    j exit

exit:
    li      $v0,10              # v0 is the syscall pointer
    syscall                     # syscall 10 == exit program
