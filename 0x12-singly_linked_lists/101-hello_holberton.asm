section .data

message db "Hello, Holberton" , 0Ah
format db "%s", 0

section .text

	global _start
_start:
sub rsp, 8
mov rdi, format
mov rsi, message
xor eax, eax
call printf
add rsp, 8
xor eax, eax
mov ebx, eax
mov eax, 60
