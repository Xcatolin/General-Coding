global _main

section .data
	text: db "Hello World!",0xa
	mlen equ $-text

section .text
_main:
	mov rax, 1	; calling the write function
	mov rdi, 1
	mov rsi, text	; moving the string into rsi
	mov rdx, mlen	; defining the length
	syscall		; calling the function

	mov rax, 60	; calling the exit function
	mov rdi, 0	; giving it the exit code 0
	syscall		; calling the function
