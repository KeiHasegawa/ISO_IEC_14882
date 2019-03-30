	.text
	.globl	_Z1hPc
_Z1hPc:
	// enter
	pushq	%rbp
	movq	%rsp, %rbp
	// parameter registers are saved
	movq	%rcx, 16(%rbp)

	subq	$16, %rsp
	// leave
	movq	%rbp, %rsp
	leave
	ret
