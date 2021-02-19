#include <stdio.h>

template<class> struct S;

template<class C, int N> struct S<C[N]> {
  C m;
  static const int V = N;
};

int main()
{
  S<double[5]> x;
  printf("x.m = %f, x.V = %d\n", x.m = 1.5, x.V);
  return 0;
}
