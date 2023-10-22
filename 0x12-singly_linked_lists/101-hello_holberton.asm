section .data
hello_msg db "Hello, Holberton", 0
fmt: db "%s", 10, 0

section .text
global main
extern printf

main:
push rbp

sub rsp, 8 ; align stack pointer
mov rsi, hello_msg
mov rax, 0
mov rdi, fmt
call printf

pop rbp

add rsp, 8; restore stack pointer

mov rax, 0
ret
