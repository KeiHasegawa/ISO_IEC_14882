#include <stdio.h>

namespace N {
  template<class X, class Y> struct S1 {
    X x;
    Y* y;
  };
}

template<class C> struct S2 {
  typedef C* P;
  N::S1<P,S2> m;
};

int main()
{
  S2<int> si;
  int n;
  si.m.x = &n;
  *si.m.x = 0x12345678;
  printf("n = 0x%x\n", n);
  si.m.y = &si;
  printf("*si.m.y->m.x = 0x%x\n", *si.m.y->m.x);
  return 0;
}
