	.text
	.globl	_Z1fP1D1P1D2
_Z1fP1D1P1D2:
	// enter
	pushq	%rbp
	movq	%rsp, %rbp
	// parameter registers are saved
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)

	subq	$16, %rsp
	// *pd1 := 1
	movq	16(%rbp), %rcx
	movl	$1, %eax
	movl	%eax, (%rcx)
	// *pd2 := 2
	movq	24(%rbp), %rcx
	movl	$2, %eax
	movl	%eax, (%rcx)
	// leave
	movq	%rbp, %rsp
	leave
	ret
