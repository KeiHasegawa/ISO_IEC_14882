#include <stdio.h>

template<class> struct S;

template<class C1, class... Cn> struct S<C1(Cn...)> {
  C1 a;
};

int main()
{
  S<int(double)> x;
  printf("x.a = %d\n", x.a = 5678);
  return 0;
}
