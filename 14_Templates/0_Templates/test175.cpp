#include <stdio.h>

typedef int T;

template<class C> struct S {
  T m;
  C c;
  S() : m(0), c(0) {}
  S(T t) : m(t), c(t) {}
};

struct X {
  X(T t)
  {
    printf("X::X(T) called with %d\n", t);
  }
};

int main()
{
  S<double> sd;
  printf("sd.m = %d sd.c = %f\n", sd.m, sd.c);
  S<X> sx(3);
  printf("sx.m = %d\n", sx.m);
  return 0;
}
