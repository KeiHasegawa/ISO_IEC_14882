#include <stdio.h>

template<class C1>
void f(C1 a)
{
  printf("a = %d\n", a);
}

template<class C2> struct S1 { C2 m1; };

template<class C3>
void f(S1<C3> a)
{
  printf("a.m1 = %f\n", a.m1);
}

template<class C4> struct S2 { C4* p2; };

template<class C5>
void f(S1<S2<C5>> a)
{
  printf("*a.m1.p2 = %d\n", *a.m1.p2);
}

int main()
{
  f(1);
  S1<double> a = { 2 };
  f(a);
  S1<S2<int>> b;
  int c = 3;
  b.m1.p2 = &c;
  f(b);
  return 0;
}
