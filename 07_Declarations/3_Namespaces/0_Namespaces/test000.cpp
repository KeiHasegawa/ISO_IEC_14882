#include <stdio.h>

namespace N { int n; }

void f()
{
  N::n = 1;
}

void g()
{
  printf("N::n = %d\n",N::n);
}

int main()
{
  f();
  g();
  return 0;
}
