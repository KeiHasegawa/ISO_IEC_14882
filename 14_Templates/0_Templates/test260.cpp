#include <stdio.h>

template<class C> struct S { C m; };

void f(S<int> si)
{
  printf("si.m = %d\n", si.m);
}

int main()
{
  f(S<int>{});
  f(S<int>{3});
  return 0;
}
