# code snippit
IsLeap:	 andi $a1, $a0, 3       #a0 is year to test
    bnez    $a1 NotLeap
    li      $a1, 100
    div     $a0, $a1
    mfhi    $a1
    bnez    $a1, Leap
    mflo    $a1
    andi    $a1, $a1, 3
    bnez    $a1, NotLeap
Leap: li    $v0, 1
    jr      $ra
NotLeap: li $v0, 0
    jr      $ra
