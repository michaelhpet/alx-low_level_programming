; My first Assembly program
; Really excited

; Author: Michael Peter
; Date: Nov 24, 2022

extern printf

section .text
	global main

	main:
		push rbp
		mov rdi, format
		mov rsi, greeting
		mov rax, 0x00
		call printf
		pop rbp
		mov rax, 0x00
		ret

section .data
	greeting: db "Hello, Holbeton", 0x00
	format: db "%s", 0x0A, 0x00


; Maybe create a compiler soon, lol
