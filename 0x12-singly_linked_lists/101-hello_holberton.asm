;
global _start

section .data:
	message: db "Hello, Holberton",0

section .text:
_start:
	global main
	extern printf
main:
	sub rsp, 8
	mov edi, message
o EDI
	xor eax, eax
	call printf
	
	add rsp, 8
	xor eax, eax
	ret

