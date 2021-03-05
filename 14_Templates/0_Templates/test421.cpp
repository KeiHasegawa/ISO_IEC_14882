#include <stdio.h>

template<class C1>
void f(C1 a)
{
  printf("a = %d\n", a);
}

template<class C2, class C3> struct S { C2 c2; C3 c3; };

template<class C4>
void f(S<C4,C4> a)
{
  printf("a.c1 = %d, a.c2 = %d\n", a.c2, a.c3);
}

template<class C5, class C6>
void f(S<C5,C6> a)
{
  printf("a.c1 = %d, a.c2 = %f\n", a.c2, a.c3);
}

int main()
{
  f(1);
  S<int,int> a = { 2 , 3 };
  f(a);
  S<int,double> b = { 4, 5.5 };
  f(b);
  return 0;
}
