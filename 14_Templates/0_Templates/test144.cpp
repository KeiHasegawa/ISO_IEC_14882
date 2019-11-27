#include <stdio.h>

template<class C> struct S {
  typename C::T m;
};

struct X {
  struct T {
    int a;
  };
};

struct Y {
  typedef double T;
};

int main()
{
  S<X> sx;
  printf("%d\n", sx.m.a = 123);
  S<Y> sy;
  printf("%f\n", sy.m = 456.0);
  return 0;
}


