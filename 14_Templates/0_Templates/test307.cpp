#include <stdio.h>

template<class...> struct S1 {
  double a;
};

template<class C1, class... Cn>
struct S1<C1, Cn...> : S1<Cn...> {
  C1 b;
};

int main()
{
  S1<int> x;
  x.a = 1.0;
  x.b = 2;
  printf("x.a = %f, x.b = %d\n", x.a, x.b);
  return 0;
}
