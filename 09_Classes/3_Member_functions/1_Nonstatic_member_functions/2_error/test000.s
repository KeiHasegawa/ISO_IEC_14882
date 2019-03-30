	.text
	.globl	_Z2fgPK1X
_Z2fgPK1X:
	// enter
	pushq	%rbp
	movq	%rsp, %rbp
	// parameter registers are saved
	movq	%rcx, 16(%rbp)

	subq	$32, %rsp
	// param p
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	// call X::g
	call	_ZN1X1gvE
	// leave
	movq	%rbp, %rsp
	leave
	ret
	.globl	_Z2fhPKV1X
_Z2fhPKV1X:
	// enter
	pushq	%rbp
	movq	%rsp, %rbp
	// parameter registers are saved
	movq	%rcx, 16(%rbp)

	subq	$32, %rsp
	// param p
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	// call X::h
	call	_ZN1X1hvE
	// leave
	movq	%rbp, %rsp
	leave
	ret
