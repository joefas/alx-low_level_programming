section .data
hello_msg db "Hello, Holberton", 0

section .text
global main
extern printf

main:
sub rsp, 8; align stack pointer
mov rdi, hello_msg
call printf
add rsp, 8; restore stack pointer
ret
