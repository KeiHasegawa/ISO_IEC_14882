#include <stdio.h>

template<class> struct S;

template<class C1, class C2> struct S<C1(C2)> {
  C1 a;
  C2 b;
};

int main()
{
  S<int(double)> x;
  printf("x.a = %d, x.b = %f\n", x.a = 1, x.b = 2);
  return 0;
}
