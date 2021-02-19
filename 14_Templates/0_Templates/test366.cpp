#include <stdio.h>

template<class> struct S;

template<class C1> struct S<C1(int)> {
  C1 m;
};

int main()
{
  S<double(int)> x;
  printf("x.m = %f\n", x.m = 0.5);
  return 0;
}
