#include <stdio.h>

template<class C1>
void f(C1 a)
{
  printf("a = %d\n", a);
}

template<class C2> struct S { C2 m; };

template<class C3>
void f(S<C3> a)
{
  printf("a.m = %f\n", a.m);
}

int main()
{
  f(1);
  S<double> a = { 2 };
  f(a);
  return 0;
}
