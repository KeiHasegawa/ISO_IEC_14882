#include <stdio.h>

struct S { int m; };

void f(int b)
{
  S a;
  a = { b };
  printf("a.m = %d\n", a.m);
  S a2;
  a2 = {};
  printf("a2.m = %d\n", a2.m);
}

int main()
{
  f(3);
  return 0;
}

