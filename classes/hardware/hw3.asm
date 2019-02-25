
prob3:
.data
i: .word 3
J: .word 2
f: .word 5
g: .word 8
h: .word 9
A: .word 1, 2, 3, 4, 5, 6
B: .word 10, 10, 10, 10, 10, 10, 10
    
.text
    la      $s0, f
    la      $s1, g
    la      $s2, h
    la      $s3, i
    la      $s4, J
    la      $s6, A
    la      $s7, B

# 3
# c-code :: B[8] = A[i−j];
# variable names
#f   , g   , h   , i   , j   , A  , B
#$s0 , $s1 , $s2 , $s3 , $s4 , $s6, $s7
    

    sub     $s0, $s3, $s4       # i - j
    add     $s0, $s0, $s0       # adjust the size, 2*[i-j]
    add     $s0, $s0, $s0       # adjust again   , 4*[i-j]
    add     $s0, $s6, $s0       # store total location &A + 4*[i-j]
    lw      $s0, 0($s0)         # f = A[i-j]
    sw      $s0, 32($s7)        # B[8] = f

    addi    $v0, $0, 1
    addi    $a0, $s0, 0
    syscall

# 4

    sll     $t0, $s0, 2         # $t0 = f * 4
    add     $t0, $s6, $t0       # $t0 = &A[f]
    sll     $t1, $s1, 2         # $t1 = g * 4
    add     $t1, $s7, $t1       # $t1 = &B[g]
    lw      $s0, 0($t0)         # f = A[f]
    addi    $t2, $t0, 4
    lw      $t0, 0($t2)
    add     $t0, $t0, $s0
    sw      $t0, 0($t1)


    lw      $s0, 0($t0)         # A's out
    lw      $s1, 4($t0)
    lw      $s3, 0($t1)         # B's out
    lw      $s4, 4($t1)
    sw      $s3, 0($t0)         # A's in
    sw      $s4, 4($t0)
    sw      $s0, 0($t1)         # B's in
    sw      $s1, 4($t1)

