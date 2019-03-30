	.comm	m, 16 # 4
	.comm	_ZN1N1nE, 16 # 4
	.text
	.globl	_Z1fv
_Z1fv:
	// enter
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$16, %rsp
	// return m
	movq	.refptr.m(%rip),	%rax
	movl	(%rax), %eax
	// leave
	movq	%rbp, %rsp
	leave
	ret
	.globl	_Z1gv
_Z1gv:
	// enter
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$16, %rsp
	// return m
	movq	.refptr.m(%rip),	%rax
	movl	(%rax), %eax
	// leave
	movq	%rbp, %rsp
	leave
	ret
	.section	.rdata$.refptr.m, "dr"
	.globl	.refptr.m
	.linkonce        discard
.refptr.m:
	.quad	m
