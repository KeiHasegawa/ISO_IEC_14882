#include <stdio.h>

struct S { int m; };

void f(S s)
{
  s.m = 123;
  printf("s.m = %d\n", s.m);
}

int main()
{
  f(S{});
  return 0;
}
