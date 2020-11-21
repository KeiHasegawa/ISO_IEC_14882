#include <stdio.h>

namespace N {
  template<class C1> struct S1 {
    typedef typename C1::T T;
  };
}

template<class C2> struct S2 {
  C2 m;
  typedef N::S1<C2> NSA;
  typedef typename NSA::T T;
};

struct X {
  typedef int T;
  T m;
};

int main()
{
  S2<X> x;
  x.m.m = 1;
  printf("x.m.m = %d\n", x.m.m);
  return 0;
}
