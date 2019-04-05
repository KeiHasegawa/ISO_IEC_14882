include ../Makefile.error2

test.lof:test.log
	./conv.csh test.log
	$(DIFF) $< $@
