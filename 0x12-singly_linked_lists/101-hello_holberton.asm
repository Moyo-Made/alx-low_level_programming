	global	main
		extern	printf
main:

		mov	edi, form at
		xor	eax, eax
		call	printf
		mov	eax, 0
		ret
form at: db `Hello, Holberton\n`, 0