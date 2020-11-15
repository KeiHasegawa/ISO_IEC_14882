#include <stdio.h>

template<class C> struct S {
  S(C& c, double d)
  {
    printf("S::S(C&, double) called with %f\n", d);
  }
};

template<class A, class B> S<A> f(A& x, B i)
{
  return S<A>(x,  typename A::T(i));
}

struct X {
  typedef double T;
};

int main()
{
  X x;
  f(x, 4);
  return 0;
}
