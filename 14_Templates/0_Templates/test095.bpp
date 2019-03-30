#include <stdio.h>

template<class C> struct S {
  C* p;
};

namespace N {
  template<class C> struct S {
    C m;
  };
}

int main()
{
  S<int> s;
  int a = 1;
  s.p = &a;
  printf("*s.p = %d\n", *s.p);
  N::S<int> ns;
  printf("ns.m = %d\n", ns.m = 2);
  return 0;
}

