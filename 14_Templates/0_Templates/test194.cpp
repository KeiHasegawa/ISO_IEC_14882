#include <stdio.h>

namespace N {
  template<class C1> struct S1;
}

namespace N {
  template<class C1> struct S1 {
    typedef typename C1::T T;
  };
}

template<class A2, class B2> struct S2 {
  A2 m;
  typedef N::S1<A2> NSA;
  typedef typename NSA::T T;
};

template<class A, class B, class C>
void f(const S2<A, C>& x, const S2<B, C>& y)
{
  printf("x.m.m = %d y.m.m = %f\n", x.m.m, y.m.m);
}

struct X {
  typedef int T;
  T m;
};

struct Y {
  typedef double T;
  T m;
};

int main()
{
  S2<X, char> x;
  x.m.m = 1;
  S2<Y, char> y;
  y.m.m = 2.0;
  f(x, y);
  return 0;
}
