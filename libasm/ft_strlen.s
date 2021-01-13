section	.text
		global ft_strlen

ft_strlen:
		xor		rax, rax				; rax = 0

	.while_loop:
		mov		cl, byte[rdi + rax]		; cl = *str
		cmp		cl, 0					; compare cl and '\0'
		je		.while_end				; if = '\0' -> end
		inc		rax						; else rax ++
		jmp		.while_loop				; loop

	.while_end:
		ret