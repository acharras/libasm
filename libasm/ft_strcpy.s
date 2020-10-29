section	.text
		global ft_strcpy

ft_strcpy:
		xor		rdx, rdx

    .while_loop:
		mov		cl, byte[rsi + rdx]
        mov		cl, byte[rdi + rdx]
		cmp		cl, 0
		je		.while_end
		inc		rdx
		jmp		.while_loop

    .while_end:
		mov		rax, rdi
		ret