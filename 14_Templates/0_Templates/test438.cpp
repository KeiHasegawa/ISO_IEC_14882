#include <stdio.h>

struct B {
  virtual int vf()
  {
    return 1234;
  }
};


template<class C1> struct D : C1, B {
};

template<class C2> struct D2 : D<C2> {};

struct A {
  double d;
};

int main()
{
  D2<A> x;
  printf("x.vf() returns %d, x.d = %f\n", x.vf(), x.d = 2.0);
  return 0;
}
