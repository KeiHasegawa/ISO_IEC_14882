#include <stdio.h>

namespace N {
  typedef int T;
}

void f(N::T a)
{
  printf("a = %d\n", a);
}

int main()
{
  f(5);
  return 0;
}

