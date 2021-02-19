#include <stdio.h>

template<class> struct S;

template<class C, int N> struct S<C[N]> {
  C m;
  static int V;
};

template<class C, int N> int S<C[N]>::V;

int main()
{
  S<double[5]> x;
  printf("x.m = %f, x.V = %d\n", x.m = 1.5, x.V = 10);
  return 0;
}
