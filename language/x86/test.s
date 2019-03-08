; nasm -f elf64 -o test.o test.s 
; ld -o test test.o 
; ./test

global _start

section .text

%define string(a) "a \
a \
a"

_start:
  mov rax, 1        ; write(
  mov rdi, 1        ;   STDOUT_FILENO,
  mov rsi, msg2      ;   "Hello, world!\n",
  mov rdx, msglen   ;   sizeof("Hello, world!\n")
  syscall           ; );

  mov rax, 60       ; exit(
  mov rdi, 0        ;   EXIT_SUCCESS
  syscall           ; );

section .rodata
  msg: db "Hello, world!", 10
  msg2: db string("cats"), 4
  msglen: equ $ - msg


