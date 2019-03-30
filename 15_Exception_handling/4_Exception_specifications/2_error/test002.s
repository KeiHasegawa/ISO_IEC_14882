	.comm	pf1, 16 # 8
	.comm	pf2, 16 # 8
	.text
	.globl	_Z1fv
_Z1fv:
	// enter
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$16, %rsp
	// pf1 := pf2
	movq	.refptr.pf2(%rip),	%rax
	movq	(%rax), %rax
	movq	%rax, %rbx
	movq	.refptr.pf1(%rip), %rax
	movq	%rbx, (%rax)
	// pf2 := pf2
	movq	.refptr.pf2(%rip),	%rax
	movq	(%rax), %rax
	movq	%rax, %rbx
	movq	.refptr.pf2(%rip), %rax
	movq	%rbx, (%rax)
	// leave
	movq	%rbp, %rsp
	leave
	ret
	.section	.rdata$.refptr.pf1, "dr"
	.globl	.refptr.pf1
	.linkonce        discard
.refptr.pf1:
	.quad	pf1
	.section	.rdata$.refptr.pf2, "dr"
	.globl	.refptr.pf2
	.linkonce        discard
.refptr.pf2:
	.quad	pf2
