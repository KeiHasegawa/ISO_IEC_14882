#include <stdio.h>

template<class C> struct S {
  C m;
  template<class C2> void f(C2 c2);
};

template<class C> template<class C2> void S<C>::f(C2 c2)
{
  printf("S<C>::f(C2> called\n");
  printf("m = %f, c2 = %d\n", m, c2);
}

int main()
{
  S<double> sd;
  sd.m = 0.5;
  sd.f(5);
  return 0;
}
