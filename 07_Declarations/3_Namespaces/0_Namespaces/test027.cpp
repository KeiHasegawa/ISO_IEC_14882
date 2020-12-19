#include <stdio.h>

namespace N1 {
  typedef int T;
}

namespace N2 {
  struct S {
    N1::T f();
  };


  N1::T S::f()
  {
    return 123;
  }
}

int main()
{
  N2::S s;
  printf("%d\n", s.f());
  return 0;
}
