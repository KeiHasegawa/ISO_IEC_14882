	.text
_ZN1B6.vftblE:
	.quad	_ZN1B1fvE
	.text
	.globl	_Z1fv
_Z1fv:
	// enter
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$48, %rsp
	// .var0x6000967d0 := &d
	leaq	-9(%rbp), %rbx
	movq	%rbx, -24(%rbp)
	// param .var0x6000967d0
	movq	-24(%rbp), %rax
	movq	%rax, %rcx
	// call D::f
	call	_ZN1D1fvE
	// leave
	movq	%rbp, %rsp
	leave
	ret
