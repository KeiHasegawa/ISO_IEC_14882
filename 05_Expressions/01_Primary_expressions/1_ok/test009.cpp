#include <stdio.h>

struct S { int m; };

void f(S s)
{
  printf("s.m = %d\n", s.m);
}

int main()
{
  f({1});
  return 0;
}
