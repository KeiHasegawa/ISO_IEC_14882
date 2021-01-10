#include <stdio.h>

template<class C> struct S;

template<class C> struct S<C&> {
  C a;
};

template<class C> struct S<C&&> {
  C* b;
};

int main()
{
  S<int&> x;
  printf("x.a = %d\n", x.a = 123);
  S<int&&> y;
  int c;
  y.b = &c;
  printf("*y.b = %d\n", *y.b = 456);
  return 0;
}
