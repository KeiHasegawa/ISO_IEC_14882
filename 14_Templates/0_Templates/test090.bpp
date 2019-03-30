#include <stdio.h>

namespace N1 {
  template<class C> void f(C c)
  {
    printf("N1::f called\n");
    printf("c = %d\n", c);
  }
}

namespace N2 {
  template<class C> void f(C c)
  {
    printf("N2::f called\n");
    printf("c = %f\n", c);
  }
}

int main()
{
  int a = 1;
  N1::f(a);
  double b = 1.5;
  N2::f(b);
  return 0;
}
