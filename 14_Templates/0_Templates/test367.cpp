#include <stdio.h>

template<class> struct S;

template<class C> struct S<C[5]> {
  C m;
};

int main()
{
  S<double[5]> x;
  printf("x.m = %f\n", x.m = 1.5);
  return 0;
}
