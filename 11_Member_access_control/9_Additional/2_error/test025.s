	.text
	.globl	_Z1gP1X
_Z1gP1X:
	// enter
	pushq	%rbp
	movq	%rsp, %rbp
	// parameter registers are saved
	movq	%rcx, 16(%rbp)

	subq	$32, %rsp
	// param p
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	// call X::f
	call	_ZN1X1fvE
	// leave
	movq	%rbp, %rsp
	leave
	ret
