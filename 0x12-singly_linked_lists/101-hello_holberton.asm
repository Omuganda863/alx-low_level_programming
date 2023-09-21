section .data
	message db "Hello, Holberton",10

	section .text

	global main
main:
	mov rsi, message
	mov rdx, 17
	mov rax,1
	mov rdi,1
	syscall
