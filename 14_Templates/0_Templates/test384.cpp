#include <stdio.h>

namespace N {
  template<class C1> void f(C1 a)
  {
    printf("f(C1) called with %f\n", a);
  }
  template<class C2> void f(C2* p)
  {
    printf("f(C2*) called with %d\n", *p);
  }
}

int main()
{
  using N::f;
  f(1.0);
  int a = 10;
  f(&a);
  return 0;
}
