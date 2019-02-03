# Read and echo file on a character by character basis


    .data
file:
    .asciiz "test.txt"          # file name
    .word   0                   # why?
buffer: 
    .space 64
    .byte 0

    .text
main:
    jal     open_file
    jal     read_file
    jal     print_it
#    jal     read_file_4byte # and print a byte
#    jal     close_file
    
    j       exit
    

print_it:
    li      $v0, 4              # 4=print str
    la      $a0, buffer         # buffer needed
    syscall                     
    
    j return

# open_file(file_name=$a0)
open_file:
    la      $a0, file           # $a2 = name of file to read
    li      $v0, 13             # 13=open file
    add     $a1, $0, $0         # $a1=flags=O_RDONLY=0
    add     $a2, $0, $0         # $a2=mode=0
    syscall                     # Open File, $v0 <- fd
    add     $s0, $v0, $0        # store fd in $s0

    j       return




read_file: # (not done) attempting to read whole file
    li      $v0, 14             # 14=read from  file
    add     $a0, $s0, $0        # $s0 contains fd
    la      $a1, buffer         # buffer to hold file stuff
    li      $a2, 5             # Read n bytes
    syscall

    j return


read_file_4byte:
# Read 4 bytes from file, storing in buffer
    li      $v0, 14             # 14=read from  file
    add     $a0, $s0, $0        # $s0 contains fd
    la      $a1, buffer         # buffer to hold int
    li      $a2, 4              # Read 4 bytes
    syscall

    li      $v0, 11             # 11=print char
    lw      $a0, buffer         # buffer contains the char
    syscall                     # print char
    
    j return


# Close File

close_file:
    li      $v0, 16             # 16=close file
    add     $a0, $s0, $0        # $s0 contains fd
    syscall                     # close file
    
    j       return


exit:
    li      $v0, 10
    syscall

return:
    jr      $ra


