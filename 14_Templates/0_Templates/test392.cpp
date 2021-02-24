#include <stdio.h>

template<class C1> struct S {
  static const int ci = 123;
};

template<class C2> const int S<C2>::ci;

double ci;

int main()
{
  printf("S<double>::ci = %d\n", S<double>::ci);
  printf("ci = %f\n", ci = 456);
  return 0;
}
