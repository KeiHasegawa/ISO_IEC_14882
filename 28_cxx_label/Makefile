include ../Makefile.error2

test.lof:test.log
	line_conv.csh test.log
	$(DOGV) $(DIFF) $< $@
