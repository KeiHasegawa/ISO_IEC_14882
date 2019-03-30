#include <stdio.h>

template<class C> struct S {
  typedef typename C::X Y;
  template<class C2> void f(C2);
};

struct T {
  typedef int X;
};

int main()
{
  S<T> x;
  x.f(3);
  return 0;
}

template<class C> template<class C2> void S<C>::f(C2)
{
  printf("S<C>::f(C2) called\n");
  Y y;
  printf("y = 0x%x\n", y = 0x12345678);
}
