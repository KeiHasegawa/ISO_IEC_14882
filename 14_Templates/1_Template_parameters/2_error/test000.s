	.comm	i, 16 # 4
	.comm	x, 16 # 8
	.text
	.globl	_Z1fv
_Z1fv:
	// enter
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$32, %rsp
	// .var0x6000957e0 := i
	movq	.refptr.i(%rip),	%rax
	movl	(%rax), %eax
	movl	%eax, -12(%rbp)
	// i := .var0x6000957e0 + 1
	movl	-12(%rbp), %eax
	addl	$1, %eax
	movq	.refptr.i(%rip), %rbx
	movl	%eax, (%rbx)
	// leave
	movq	%rbp, %rsp
	leave
	ret
	.section	.rdata$.refptr.i, "dr"
	.globl	.refptr.i
	.linkonce        discard
.refptr.i:
	.quad	i
