section	.text
		global ft_strdup
extern ft_strlen
extern ft_strcpy
extern malloc

ft_strdup:
    call    ft_strlen           ; call ft_strlen(str)
    push    rdi                 ; save rdi
    inc     rax                 ; rax ++
    mov     rdi, rax            ; rdi = rax
    call    malloc              ; malloc(rax)
    pop     rdi                 ; use saved rdi 
    cmp     rax, 0              ; compare rax and '\0'
    je      end                 ; if rax = '\0' -> end
    mov     rsi, rdi            ; rsi = rdi
    mov     rdi, rax            ; rdi = rax
    call    ft_strcpy           ; ft_strcpy(rsi, rdi)
	ret                         ; return

end:
    ret                         ; return