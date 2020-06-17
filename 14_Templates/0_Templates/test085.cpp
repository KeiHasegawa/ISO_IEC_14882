#include <stdio.h>

namespace N {
  template<class C> struct X;
  typedef X<int> xi;
  struct S {
    S(const xi&);
  };
  template<class C> struct X {
    C c;
  };
  S::S(const xi& a)
  {
    printf("N::S::S called\n");
    printf("a.c = %d\n", a.c);
  }
}

int main()
{
  N::xi nxi;
  nxi.c = 1234;
  N::S s(nxi);
  return 0;
}
