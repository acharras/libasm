section	.text
		global ft_strcmp

ft_strcmp:
		xor		rdx, rdx					; rdx = 0

	.while_loop:
		movzx	eax, byte[rdi + rdx]		; eax = *dest
		movzx	r8d, byte[rsi + rdx]		; r8d = *src
		sub		eax, r8d					; eax = eax - r8d
		jnz		.end						; if eax = 0 -> end
		cmp		r8d, 0						; compare r8d = '\0'
		je		.end						; = '\0' -> end
		inc		rdx							; else rdx ++
		jmp		.while_loop					; loop

	.end:
		ret									; return