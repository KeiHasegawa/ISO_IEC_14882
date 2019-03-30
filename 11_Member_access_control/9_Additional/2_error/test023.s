	.text
	.globl	_Z1gP1BP1D1P1D2
_Z1gP1BP1D1P1D2:
	// enter
	pushq	%rbp
	movq	%rsp, %rbp
	// parameter registers are saved
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)

	subq	$16, %rsp
	// *pb := 1
	movq	16(%rbp), %rcx
	movl	$1, %eax
	movl	%eax, (%rcx)
	// *p1 := 2
	movq	24(%rbp), %rcx
	movl	$2, %eax
	movl	%eax, (%rcx)
	// *p2 := 3
	movq	32(%rbp), %rcx
	movl	$3, %eax
	movl	%eax, (%rcx)
	// leave
	movq	%rbp, %rsp
	leave
	ret
