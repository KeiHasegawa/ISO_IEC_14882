	.text
	.globl	_Z1fP1X
_Z1fP1X:
	// enter
	pushq	%rbp
	movq	%rsp, %rbp
	// parameter registers are saved
	movq	%rcx, 16(%rbp)

	subq	$16, %rsp
	// *p := 1
	movq	16(%rbp), %rcx
	movl	$1, %eax
	movl	%eax, (%rcx)
	// leave
	movq	%rbp, %rsp
	leave
	ret
