	.text
	.globl	_Z1fi
_Z1fi:
	// enter
	pushq	%rbp
	movq	%rsp, %rbp
	// parameter registers are saved
	movl	%ecx, 16(%rbp)

	subq	$16, %rsp
	// label0x600094d40:
._Z1fi0x600094d40:
	// x := x - 1
	movl	16(%rbp), %eax
	subl	$1, %eax
	movl	%eax, 16(%rbp)
	// if x < 0 goto label0x600095330
	movl	16(%rbp), %eax
	cmpl	$0, %eax
	jl	._Z1fi0x600095330
	// goto label0x600094d40
	jmp	._Z1fi0x600094d40
	// label0x600095330:
._Z1fi0x600095330:
	// leave
	movq	%rbp, %rsp
	leave
	ret
