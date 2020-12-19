#include <stdio.h>

namespace N1 {
  typedef int X;
}

namespace N2 {
  template<class C1> struct S1 {
    typedef C1 Y;
    N1::X f(Y);
  };

  template<class C2> N1::X S1<C2>::f(Y a)
  {
    return a + 1;
  }
}

int main()
{
  N2::S1<double> s;
  printf("%d\n", s.f(4.0));
  return 0;
}
