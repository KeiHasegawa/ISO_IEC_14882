#include <stdio.h>

struct B {
  int a;
};

template<class C> struct D : B {
  typedef decltype(a) T;
};

int main()
{
  D<double>::T x;
  printf("x = %d\n", x = 1234);
  return 0;
}
