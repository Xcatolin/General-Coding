; HelloWorld.asm

global _start ; Set the global start as the _start entry point

section .text ; All program code must be on the Text section

_start: ; Defining the program's entry point

	mov eax, 0x4 ; Defining the Write function to the EAX register
	mov ebx, 0x1 ; Defining STDOUT
	mov ecx, message ; Referencing the string
	mov edx, mlen ; Defining the length of the string
	int 0x80 ; Issue the system call interrupt 0x80

	mov eax, 0x1  ; Calling the exit function
	mov ebx, 0x05 ;
	int 0x80 ; Issue the syscall

section .data ; The idea is to print HelloWorld somewhere, and it must be on the data section

	message: db "Hello World!" ; Mentioning the message inside the data section with defined byte
	mlen equ $-message ; Defining the variable mlen containing the length of the string from the var message
