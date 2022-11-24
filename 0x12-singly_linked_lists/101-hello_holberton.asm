; My first assembly program
; Very excited

; Author: Michael Peter
; Date: Nov 24, 2022

extern printf

section .text
	global main

	main:
		push rbp
		mov rdi, format
		mov rsi, greeting
		mov rax, 0x0
		call printf
		pop rbp
		mov rax, 0x0
		ret

section .data
	greeting: db "Hello, Holberton", 0x0
	format: db "%s", 0xA, 0x0


; Next project: custom compiler, lol...
