#include <stdio.h>

template<class C> void f(C c)
{
  printf("::f called\n");
  printf("c = %d\n", c);
}

namespace N {
  template<class C> void f(C c)
  {
    printf("N::f called\n");
    printf("c = %f\n", c);
  }
}

int main()
{
  int a = 1;
  f(a);
  double b = 1.5;
  N::f(b);
  return 0;
}
