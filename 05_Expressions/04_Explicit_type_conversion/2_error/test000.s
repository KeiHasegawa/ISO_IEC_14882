	.text
	.globl	_Z3fooP1D
_Z3fooP1D:
	// enter
	pushq	%rbp
	movq	%rsp, %rbp
	// parameter registers are saved
	movq	%rcx, 16(%rbp)

	subq	$32, %rsp
	// .var0x600095d20 := (struct A *)p
	movq	16(%rbp), %rax
	movq	%rax, -16(%rbp)
	// return .var0x600095d20
	movq	-16(%rbp), %rax
	// leave
	movq	%rbp, %rsp
	leave
	ret
