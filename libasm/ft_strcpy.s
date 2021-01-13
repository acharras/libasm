section	.text
		global ft_strcpy

ft_strcpy:
		mov		rax, 0					; rdx = 0

    .while_loop:
		mov		cl, BYTE[rax + rsi]		; cl = *src
        mov		BYTE[rax + rdi], cl		; *dest = cl 
		cmp		cl, 0					; compare bl and '\0' 
		je		.while_end				; if = '\0' -> end
		inc		rax						; else rax ++
		jmp		.while_loop				; loop

    .while_end:
		mov		rax, rdi				; rax = rdi (*dest)
		ret								; return rdx