#include <stdio.h>

template<class C> struct S1 {
  C m;
};

template<class A, class B> struct S2  {
  A a;
  B b;
};

template<class T> struct S2<T*, T*> : S1<T> {
};

int main()
{
  S2<int*, int*> x;
  x.m = 1234;
  printf("x.m = %d\n", x.m);
  S2<int, int*> y;
  y.a = 5678;
  y.b = &y.a;
  printf("*y.b = %d\n", *y.b);
  return 0;
}
