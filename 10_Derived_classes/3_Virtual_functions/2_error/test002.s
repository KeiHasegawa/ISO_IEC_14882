	.text
_ZN1A6.vftblE:
	.quad	_ZN1A1fvE
	.text
	.globl	_Z3foev
_Z3foev:
	// enter
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$48, %rsp
	// param 1
	movl	$1, %eax
	movl	%eax, %ecx
	// .var0x6000995d0 := call new
	call	_Znwj
	movq	%rax, -16(%rbp)
	// .var0x600099860 := *.var0x6000995d0
	movq	-16(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -24(%rbp)
	// .var0x600099820 := *.var0x600099860
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -32(%rbp)
	// param .var0x6000995d0
	movq	-16(%rbp), %rax
	movq	%rax, %rcx
	// call .var0x600099820
	movq	-32(%rbp), %rax
	call	*%rax
	// leave
	movq	%rbp, %rsp
	leave
	ret
