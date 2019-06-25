include ../Makefile.error2

test.lof:test.log
	lineno_conv.csh test.log
	$(DIFF) $< $@
