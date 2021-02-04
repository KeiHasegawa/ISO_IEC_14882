#include <stdio.h>

struct B {
  typedef int T;
};

template<class C2> struct D : B {
  T m;
  C2 m2;
};

int main()
{
  D<double> d;
  d.m = 1;
  d.m2 = 2.0;
  printf("d.m = %d, d.m2 = %f\n", d.m, d.m2);
  return 0;
}
