#include <stdio.h>

struct B {
  virtual ~B()
  {
    printf("B::~B() called\n");
  }
};

template<class C1> struct D : B, C1 {
};

template<class C2> struct D2 : D<C2> {};

struct A {
  int a;
};

int main()
{
  D2<A> d2;
  printf("d2.a = %d\n", d2.a = 1234);
  return 0;
}
