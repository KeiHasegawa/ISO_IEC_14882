#include <stdio.h>

namespace N1 {
  template<class C> struct S {
    C* p;
  };
}

namespace N2 {
  template<class C> struct S {
    C m;
  };
}

int main()
{
  N1::S<int> n1s;
  int a = 1;
  n1s.p = &a;
  printf("*n1s.p = %d\n", *n1s.p);
  N2::S<int> n2s;
  printf("n2s.m = %d\n", n2s.m = 2);
  return 0;
}

