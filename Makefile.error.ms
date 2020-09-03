TESTS = $(wildcard *.cpp)
LOFS = $(TESTS:.cpp=.lof)
DIFF = diff
TOUCH = touch
DOS2UNIX = dos2unix.csh
DOGV = wdog.exe -v
DOG = wdog.exe
EUC2SJIS = euc2sjis.exe

ifeq ($(LANG),ja_JP.eucJP)
	EUC2SJIS = euc2sjis.exe
endif
ifeq ($(LANG),ja_JP.UTF-8)
	EUC2SJIS = utf2sjis
endif
debian = $(if $(wildcard /etc/debian_version),1,0)
ifeq ($(debian),1)
	EUC2SJIS = utf2sjis
endif
UNAME := $(shell uname)
ifneq (,$(findstring CYGWIN,$(UNAME)))
	EUC2SJIS = cat
endif
ifneq (,$(findstring Darwin,$(UNAME)))
	EUC2SJIS = utf2sjis
endif

all:$(LOFS)

CPP = hcpp.exe
CPP=hcpp.exe
ifeq ($(INTEL_DLL_EXTRA_OPTION),--x86)
CPP_FLAG = -D_MSC_VER \
-D_M_IX86 \
-DWIN32 \
-U_WIN64 \
-D__int64='long long' \
-D__cdecl= \
-D__pragma='\#pragma' \
-D_Bool=int \
-D__declspec\(a\)= \
-D__inline=inline \
-D__fastcall= \
-H \
-W 0 \
$(EXTRA_CPP_FLAG)
else
CPP_FLAG = -D_MSC_VER \
-U_M_IX86 \
-D_M_X64 \
-D_WIN64 \
-D__int64='long long' \
-D__cdecl= \
-D__pragma='\#pragma' \
-D_Bool=int \
-D__declspec\(a\)= \
-D__inline=inline \
-H \
-W 0 \
$(EXTRA_CPP_FLAG)
endif

CXX1 = hcxx1.exe
CXX1_FLAG =

%.i : %.cpp
	$(DOGV) $(CPP) $(CPP_FLAG) $< | vs_header_conv.pl > $@

%.log : %.i
	-if $(DOG) $(CXX1) $< $(CXX1_FLAG) 2> $@ ; then \
		$(RM) $@ ; \
	else \
		$(DOS2UNIX) $@; $(EUC2SJIS) < $@ > $@.$$$$ ; mv $@.$$$$ $@ ; \
	fi

%.lof : %.log
	$(DOGV) $(DIFF) $< $@
	$(TOUCH) $@

clean:
	$(RM) *.i *.log *.stackdump *~

test000.lof:test000.log
test000.log:test000.i
test001.lof:test001.log
test001.log:test001.i
test002.lof:test002.log
test002.log:test002.i
test003.lof:test003.log
test003.log:test003.i
test004.lof:test004.log
test004.log:test004.i
test005.lof:test005.log
test005.log:test005.i
test006.lof:test006.log
test006.log:test006.i
test007.lof:test007.log
test007.log:test007.i
test008.lof:test008.log
test008.log:test008.i
test009.lof:test009.log
test009.log:test009.i

test010.lof:test010.log
test010.log:test010.i
test011.lof:test011.log
test011.log:test011.i
test012.lof:test012.log
test012.log:test012.i
test013.lof:test013.log
test013.log:test013.i
test014.lof:test014.log
test014.log:test014.i
test015.lof:test015.log
test015.log:test015.i
test016.lof:test016.log
test016.log:test016.i
test017.lof:test017.log
test017.log:test017.i
test018.lof:test018.log
test018.log:test018.i
test019.lof:test019.log
test019.log:test019.i

test020.lof:test020.log
test020.log:test020.i
test021.lof:test021.log
test021.log:test021.i
test022.lof:test022.log
test022.log:test022.i
test023.lof:test023.log
test023.log:test023.i
test024.lof:test024.log
test024.log:test024.i
test025.lof:test025.log
test025.log:test025.i
test026.lof:test026.log
test026.log:test026.i
test027.lof:test027.log
test027.log:test027.i
test028.lof:test028.log
test028.log:test028.i
test029.lof:test029.log
test029.log:test029.i

test030.lof:test030.log
test030.log:test030.i
test031.lof:test031.log
test031.log:test031.i
test032.lof:test032.log
test032.log:test032.i
test033.lof:test033.log
test033.log:test033.i
test034.lof:test034.log
test034.log:test034.i
test035.lof:test035.log
test035.log:test035.i
test036.lof:test036.log
test036.log:test036.i
test037.lof:test037.log
test037.log:test037.i
test038.lof:test038.log
test038.log:test038.i
test039.lof:test039.log
test039.log:test039.i

test040.lof:test040.log
test040.log:test040.i
test041.lof:test041.log
test041.log:test041.i
test042.lof:test042.log
test042.log:test042.i
test043.lof:test043.log
test043.log:test043.i
test044.lof:test044.log
test044.log:test044.i
test045.lof:test045.log
test045.log:test045.i
test046.lof:test046.log
test046.log:test046.i
test047.lof:test047.log
test047.log:test047.i
test048.lof:test048.log
test048.log:test048.i
test049.lof:test049.log
test049.log:test049.i

test050.lof:test050.log
test050.log:test050.i
test051.lof:test051.log
test051.log:test051.i
test052.lof:test052.log
test052.log:test052.i
test053.lof:test053.log
test053.log:test053.i
test054.lof:test054.log
test054.log:test054.i
test055.lof:test055.log
test055.log:test055.i
test056.lof:test056.log
test056.log:test056.i
test057.lof:test057.log
test057.log:test057.i
test058.lof:test058.log
test058.log:test058.i
test059.lof:test059.log
test059.log:test059.i

test060.lof:test060.log
test060.log:test060.i
test061.lof:test061.log
test061.log:test061.i
test062.lof:test062.log
test062.log:test062.i
test063.lof:test063.log
test063.log:test063.i
test064.lof:test064.log
test064.log:test064.i
test065.lof:test065.log
test065.log:test065.i
test066.lof:test066.log
test066.log:test066.i
test067.lof:test067.log
test067.log:test067.i
test068.lof:test068.log
test068.log:test068.i
test069.lof:test069.log
test069.log:test069.i

test070.lof:test070.log
test070.log:test070.i
test071.lof:test071.log
test071.log:test071.i
test072.lof:test072.log
test072.log:test072.i
test073.lof:test073.log
test073.log:test073.i
test074.lof:test074.log
test074.log:test074.i
test075.lof:test075.log
test075.log:test075.i
test076.lof:test076.log
test076.log:test076.i
test077.lof:test077.log
test077.log:test077.i
test078.lof:test078.log
test078.log:test078.i
test079.lof:test079.log
test079.log:test079.i

test080.lof:test080.log
test080.log:test080.i
test081.lof:test081.log
test081.log:test081.i
test082.lof:test082.log
test082.log:test082.i
test083.lof:test083.log
test083.log:test083.i
test084.lof:test084.log
test084.log:test084.i
test085.lof:test085.log
test085.log:test085.i
test086.lof:test086.log
test086.log:test086.i
test087.lof:test087.log
test087.log:test087.i
test088.lof:test088.log
test088.log:test088.i
test089.lof:test089.log
test089.log:test089.i

test090.lof:test090.log
test090.log:test090.i
test091.lof:test091.log
test091.log:test091.i
test092.lof:test092.log
test092.log:test092.i
test093.lof:test093.log
test093.log:test093.i
test094.lof:test094.log
test094.log:test094.i
test095.lof:test095.log
test095.log:test095.i
test096.lof:test096.log
test096.log:test096.i
test097.lof:test097.log
test097.log:test097.i
test098.lof:test098.log
test098.log:test098.i
test099.lof:test099.log
test099.log:test099.i

test100.lof:test100.log
test100.log:test100.i
test101.lof:test101.log
test101.log:test101.i
test102.lof:test102.log
test102.log:test102.i
test103.lof:test103.log
test103.log:test103.i
test104.lof:test104.log
test104.log:test104.i
test105.lof:test105.log
test105.log:test105.i
test106.lof:test106.log
test106.log:test106.i
test107.lof:test107.log
test107.log:test107.i
test108.lof:test108.log
test108.log:test108.i
test109.lof:test109.log
test109.log:test109.i

test110.lof:test110.log
test110.log:test110.i
test111.lof:test111.log
test111.log:test111.i
test112.lof:test112.log
test112.log:test112.i
test113.lof:test113.log
test113.log:test113.i
test114.lof:test114.log
test114.log:test114.i
test115.lof:test115.log
test115.log:test115.i
test116.lof:test116.log
test116.log:test116.i
test117.lof:test117.log
test117.log:test117.i
test118.lof:test118.log
test118.log:test118.i
test119.lof:test119.log
test119.log:test119.i

test120.lof:test120.log
test120.log:test120.i
test121.lof:test121.log
test121.log:test121.i
test122.lof:test122.log
test122.log:test122.i
test123.lof:test123.log
test123.log:test123.i
test124.lof:test124.log
test124.log:test124.i
test125.lof:test125.log
test125.log:test125.i
test126.lof:test126.log
test126.log:test126.i
test127.lof:test127.log
test127.log:test127.i
test128.lof:test128.log
test128.log:test128.i
test129.lof:test129.log
test129.log:test129.i

test130.lof:test130.log
test130.log:test130.i
test131.lof:test131.log
test131.log:test131.i
test132.lof:test132.log
test132.log:test132.i
test133.lof:test133.log
test133.log:test133.i
test134.lof:test134.log
test134.log:test134.i
test135.lof:test135.log
test135.log:test135.i
test136.lof:test136.log
test136.log:test136.i
test137.lof:test137.log
test137.log:test137.i
test138.lof:test138.log
test138.log:test138.i
test139.lof:test139.log
test139.log:test139.i

test140.lof:test140.log
test140.log:test140.i
test141.lof:test141.log
test141.log:test141.i
test142.lof:test142.log
test142.log:test142.i
test143.lof:test143.log
test143.log:test143.i
test144.lof:test144.log
test144.log:test144.i
test145.lof:test145.log
test145.log:test145.i
test146.lof:test146.log
test146.log:test146.i
test147.lof:test147.log
test147.log:test147.i
test148.lof:test148.log
test148.log:test148.i
test149.lof:test149.log
test149.log:test149.i

test150.lof:test150.log
test150.log:test150.i
test151.lof:test151.log
test151.log:test151.i
test152.lof:test152.log
test152.log:test152.i
test153.lof:test153.log
test153.log:test153.i
test154.lof:test154.log
test154.log:test154.i
test155.lof:test155.log
test155.log:test155.i
test156.lof:test156.log
test156.log:test156.i
test157.lof:test157.log
test157.log:test157.i
test158.lof:test158.log
test158.log:test158.i
test159.lof:test159.log
test159.log:test159.i

test160.lof:test160.log
test160.log:test160.i
test161.lof:test161.log
test161.log:test161.i
test162.lof:test162.log
test162.log:test162.i
test163.lof:test163.log
test163.log:test163.i
test164.lof:test164.log
test164.log:test164.i
test165.lof:test165.log
test165.log:test165.i
test166.lof:test166.log
test166.log:test166.i
test167.lof:test167.log
test167.log:test167.i
test168.lof:test168.log
test168.log:test168.i
test169.lof:test169.log
test169.log:test169.i

test170.lof:test170.log
test170.log:test170.i
test171.lof:test171.log
test171.log:test171.i
test172.lof:test172.log
test172.log:test172.i
test173.lof:test173.log
test173.log:test173.i
test174.lof:test174.log
test174.log:test174.i
test175.lof:test175.log
test175.log:test175.i
test176.lof:test176.log
test176.log:test176.i
test177.lof:test177.log
test177.log:test177.i
test178.lof:test178.log
test178.log:test178.i
test179.lof:test179.log
test179.log:test179.i

test180.lof:test180.log
test180.log:test180.i
test181.lof:test181.log
test181.log:test181.i
test182.lof:test182.log
test182.log:test182.i
test183.lof:test183.log
test183.log:test183.i
test184.lof:test184.log
test184.log:test184.i
test185.lof:test185.log
test185.log:test185.i
test186.lof:test186.log
test186.log:test186.i
test187.lof:test187.log
test187.log:test187.i
test188.lof:test188.log
test188.log:test188.i
test189.lof:test189.log
test189.log:test189.i

test190.lof:test190.log
test190.log:test190.i
test191.lof:test191.log
test191.log:test191.i
test192.lof:test192.log
test192.log:test192.i
test193.lof:test193.log
test193.log:test193.i
test194.lof:test194.log
test194.log:test194.i
test195.lof:test195.log
test195.log:test195.i
test196.lof:test196.log
test196.log:test196.i
test197.lof:test197.log
test197.log:test197.i
test198.lof:test198.log
test198.log:test198.i
test199.lof:test199.log
test199.log:test199.i

test200.lof:test200.log
test200.log:test200.i
test201.lof:test201.log
test201.log:test201.i
test202.lof:test202.log
test202.log:test202.i
test203.lof:test203.log
test203.log:test203.i
test204.lof:test204.log
test204.log:test204.i
test205.lof:test205.log
test205.log:test205.i
test206.lof:test206.log
test206.log:test206.i
test207.lof:test207.log
test207.log:test207.i
test208.lof:test208.log
test208.log:test208.i
test209.lof:test209.log
test209.log:test209.i

test210.lof:test210.log
test210.log:test210.i
test211.lof:test211.log
test211.log:test211.i
test212.lof:test212.log
test212.log:test212.i
test213.lof:test213.log
test213.log:test213.i
test214.lof:test214.log
test214.log:test214.i
test215.lof:test215.log
test215.log:test215.i
test216.lof:test216.log
test216.log:test216.i
test217.lof:test217.log
test217.log:test217.i
test218.lof:test218.log
test218.log:test218.i
test219.lof:test219.log
test219.log:test219.i

test220.lof:test220.log
test220.log:test220.i
test221.lof:test221.log
test221.log:test221.i
test222.lof:test222.log
test222.log:test222.i
test223.lof:test223.log
test223.log:test223.i
test224.lof:test224.log
test224.log:test224.i
test225.lof:test225.log
test225.log:test225.i
test226.lof:test226.log
test226.log:test226.i
test227.lof:test227.log
test227.log:test227.i
test228.lof:test228.log
test228.log:test228.i
test229.lof:test229.log
test229.log:test229.i

test230.lof:test230.log
test230.log:test230.i
test231.lof:test231.log
test231.log:test231.i
test232.lof:test232.log
test232.log:test232.i
test233.lof:test233.log
test233.log:test233.i
test234.lof:test234.log
test234.log:test234.i
test235.lof:test235.log
test235.log:test235.i
test236.lof:test236.log
test236.log:test236.i
test237.lof:test237.log
test237.log:test237.i
test238.lof:test238.log
test238.log:test238.i
test239.lof:test239.log
test239.log:test239.i

test240.lof:test240.log
test240.log:test240.i
test241.lof:test241.log
test241.log:test241.i
test242.lof:test242.log
test242.log:test242.i
test243.lof:test243.log
test243.log:test243.i
test244.lof:test244.log
test244.log:test244.i
test245.lof:test245.log
test245.log:test245.i
test246.lof:test246.log
test246.log:test246.i
test247.lof:test247.log
test247.log:test247.i
test248.lof:test248.log
test248.log:test248.i
test249.lof:test249.log
test249.log:test249.i

test250.lof:test250.log
test250.log:test250.i
test251.lof:test251.log
test251.log:test251.i
test252.lof:test252.log
test252.log:test252.i
test253.lof:test253.log
test253.log:test253.i
test254.lof:test254.log
test254.log:test254.i
test255.lof:test255.log
test255.log:test255.i
test256.lof:test256.log
test256.log:test256.i
test257.lof:test257.log
test257.log:test257.i
test258.lof:test258.log
test258.log:test258.i
test259.lof:test259.log
test259.log:test259.i

test260.lof:test260.log
test260.log:test260.i
test261.lof:test261.log
test261.log:test261.i
test262.lof:test262.log
test262.log:test262.i
test263.lof:test263.log
test263.log:test263.i
test264.lof:test264.log
test264.log:test264.i
test265.lof:test265.log
test265.log:test265.i
test266.lof:test266.log
test266.log:test266.i
test267.lof:test267.log
test267.log:test267.i
test268.lof:test268.log
test268.log:test268.i
test269.lof:test269.log
test269.log:test269.i

test270.lof:test270.log
test270.log:test270.i
test271.lof:test271.log
test271.log:test271.i
test272.lof:test272.log
test272.log:test272.i
test273.lof:test273.log
test273.log:test273.i
test274.lof:test274.log
test274.log:test274.i
test275.lof:test275.log
test275.log:test275.i
test276.lof:test276.log
test276.log:test276.i
test277.lof:test277.log
test277.log:test277.i
test278.lof:test278.log
test278.log:test278.i
test279.lof:test279.log
test279.log:test279.i

test280.lof:test280.log
test280.log:test280.i
test281.lof:test281.log
test281.log:test281.i
test282.lof:test282.log
test282.log:test282.i
test283.lof:test283.log
test283.log:test283.i
test284.lof:test284.log
test284.log:test284.i
test285.lof:test285.log
test285.log:test285.i
test286.lof:test286.log
test286.log:test286.i
test287.lof:test287.log
test287.log:test287.i
test288.lof:test288.log
test288.log:test288.i
test289.lof:test289.log
test289.log:test289.i

test290.lof:test290.log
test290.log:test290.i
test291.lof:test291.log
test291.log:test291.i
test292.lof:test292.log
test292.log:test292.i
test293.lof:test293.log
test293.log:test293.i
test294.lof:test294.log
test294.log:test294.i
test295.lof:test295.log
test295.log:test295.i
test296.lof:test296.log
test296.log:test296.i
test297.lof:test297.log
test297.log:test297.i
test298.lof:test298.log
test298.log:test298.i
test299.lof:test299.log
test299.log:test299.i
