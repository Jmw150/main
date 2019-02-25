

    slt $s0, 0, 0 # Oh look I did it, moving on..
    

# y += sum( triangular numbers range [0,x] )


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
      add  $s1, $zero, $zero  # Initialize $s1 to zero - reserved for our total sum

sum_Loop: li   $v0, 4             # Load system call to print input string
      la   $a0, sum_inputString   # Load input string for printing
      syscall
    
      li   $v0, 5             # Load system call to read number from user
      syscall

      add  $s1, $s1,   $v0    # Add number to total sum
      bne  $v0, $zero, sum_Loop   # Loop if last number wasn't 0
      
      li   $v0, 4             # Load system call to print output string
      la   $a0, sum_outputString  # Load output string for printing
      syscall
      
      li   $v0, 1             # Load system call to print string
      add  $a0, $s1, $zero    # Load sum into $a0 for printing
      syscall

      li   $v0, 4             # Load system call to print output string
    la      $a0, sum_newline    # Load output string for newline
      syscall

    j       return
