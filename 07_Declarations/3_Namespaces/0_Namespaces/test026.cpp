#include <stdio.h>
#include <stdarg.h>

inline void f(int a, ...)
{
  va_list ap;
  va_start(ap, a);
  int b = va_arg(ap, int);
  printf("%d %d\n", a, b);
  va_end(ap);
}

namespace N {
  int x;
}

int main()
{
  f(5, N::x);
  return 0;
}
