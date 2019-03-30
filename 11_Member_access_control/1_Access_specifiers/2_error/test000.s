	.text
	.globl	_Z1fv
_Z1fv:
	// enter
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$16, %rsp
	// leave
	movq	%rbp, %rsp
	leave
	ret
