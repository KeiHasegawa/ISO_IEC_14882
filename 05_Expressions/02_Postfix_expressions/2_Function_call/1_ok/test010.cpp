#include <stdio.h>

extern "C" {
void f()
{
  printf("hello world\n");
}
}

int main()
{
#if defined(INTEL) & defined(linux)
  asm("call f");
#endif // defined(INTEL) & defined(linux)

#if defined(INTEL) & defined(__CYGWIN__)
  asm("call f");
#endif // defined(INTEL) & defined(__CYGWIN__)

#if defined(_MSC_VER)
  asm("call f");
#endif // defined(_MSC_VER)

#if defined(sparc)
  asm("call f");
#endif // defined(sparc)

#if defined(POWERPC)
  asm("bl f");
#endif // defined(POWERPC)

#if defined(__SPU__)
  asm("brsl $lr,f");
#endif // defined(__SPU__)

  return 0;
}
