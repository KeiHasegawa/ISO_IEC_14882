#include <stdio.h>

template<class> struct S;

template<class C1, class... Cn> struct S<C1(Cn...)> {
  C1 a;
};

int main()
{
  S<int (double, char)> x;
  printf("x.a = %d\n", x.a = 1234);
  return 0;
}
