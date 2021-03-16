#include <stdio.h>

struct B {
  int m;
};


template<class C1> struct D : B, C1 {
};

template<class C2> struct D2 : D<C2> {};

struct A {
  double d;
};

int main()
{
  D2<A> x;
  printf("x.m = %d, x.d = %f\n", x.m = 1, x.d = 2.0);
  return 0;
}
