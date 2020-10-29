section	.text
		global ft_write

ft_write:
		mov		rax, 0x2000004
		syscall
		mov		r10, rcx
		syscall
		jae		.end
		mov		rax, -1

	.end:
		ret