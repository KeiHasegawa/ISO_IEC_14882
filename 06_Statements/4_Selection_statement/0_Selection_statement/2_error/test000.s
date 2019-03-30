	.text
	.globl	_Z1fi
_Z1fi:
	// enter
	pushq	%rbp
	movq	%rsp, %rbp
	// parameter registers are saved
	movl	%ecx, 16(%rbp)

	subq	$16, %rsp
	// leave
	movq	%rbp, %rsp
	leave
	ret
