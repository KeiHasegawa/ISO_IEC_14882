#include <stdio.h>

template<class C> struct S {
  typedef typename C::X Y;
  void f();
};

struct T {
  typedef int X;
};

int main()
{
  S<T> x;
  x.f();
  return 0;
}

template<class C> void S<C>::f()
{
  printf("S<C>::f() called\n");
  Y y;
  printf("y = 0x%x\n", y = 0x12345678);
}
