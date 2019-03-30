	.text
	.globl	_ZN2D23memP1BP1D1E
_ZN2D23memP1BP1D1E:
	// enter
	pushq	%rbp
	movq	%rsp, %rbp
	// parameter registers are saved
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)

	subq	$32, %rsp
	// .var0x600096510 := this
	movq	32(%rbp), %rax
	movq	%rax, -16(%rbp)
	// *this := 1
	movq	32(%rbp), %rcx
	movl	$1, %eax
	movl	%eax, (%rcx)
	// *.var0x600096510 := 2
	movq	-16(%rbp), %rcx
	movl	$2, %eax
	movl	%eax, (%rcx)
	// leave
	movq	%rbp, %rsp
	leave
	ret
