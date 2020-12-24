#include <stdio.h>

namespace N {
  namespace N2 {
    class X;
  }
  template<class C1> N2::X f(C1);
  namespace N2 {
    class X {
      int m;
      template<class C2> friend X N::f(C2);
    };
  }
}

template<class C3> N::N2::X N::f(C3 c)
{
  printf("c = %d\n", c);
  N2::X x;
  printf("x.m = %d\n", x.m = 456);
  return x;
}

int main()
{
  N::f(123);
  return 0;
}
