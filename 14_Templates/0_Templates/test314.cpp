#include <stdio.h>

template<class C1> struct S {
  C1 m;
  S(C1 c1) : m(c1) {}
  template<class C2> S(S<C2> a) : m(a.m) {}
};

int main()
{
  S<int> x(3);
  S<double> y(x);
  printf("x.m = %d, y.m = %f\n", x.m, y.m);
  return 0;
}
