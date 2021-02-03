#include <stdio.h>

template<class C1> struct S {
  C1 a;
};

template<class C2> struct S<C2 const> {
  C2* b;
};

int main()
{
  S<int> x;
  printf("x.a = %d\n", x.a = 1);
  S<const double> y;
  double d = 2.0;
  y.b = &d;
  printf("*y.b = %f\n", *y.b);
  return 0;
}


