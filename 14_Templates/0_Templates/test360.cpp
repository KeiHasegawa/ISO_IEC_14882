#include <stdio.h>

template<bool, class C1, class... Cn>
struct S { C1 a; };

template<class C2, class... Cm>
struct S<true, C2, Cm...> { C2 b; };

template<class C3, class C4>
struct S<true, C3, C4> { C3 c; C4 d; };

int main()
{
  S<false, int> x;
  x.a = 1;
  S<true, int> y;
  y.b = 2;
  S<true, int, double> z;
  z.c = 3;
  z.d = 4.0;
  printf("x.a = %d, y.b = %d, z.c = %d, z.d = %f\n", x.a, y.b, z.c, z.d);
  return 0;
}
