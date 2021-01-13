section	.text
		global ft_write
extern __errno_location
ft_write:
		mov		rax, 1			; rax = 1
		syscall					; system call
		cmp		rax, 0			; compare rax < 0
		jl		error			; if rax < 0 error
		ret						; return rax


error:
		neg		rax					; rax *= -1
		mov		rdi, rax			; rdi = rax
		call	__errno_location	; call errno function
		mov		[rax], rdi			; *rax = rdi
		mov		rax, -1				; rax = -1
		ret							; return


