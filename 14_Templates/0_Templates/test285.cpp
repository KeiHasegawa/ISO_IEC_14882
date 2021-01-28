#include <stdio.h>

template<class> struct S;

template<class C1> using S_t = typename S<C1>::T;

template<class C2> struct S { using T = C2; };

int main()
{
  S<int>::T a = 1;
  S_t<double> b = 2;
  printf("a = %d, b = %f\n", a, b);
  return 0;
}
