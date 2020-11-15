#include <stdio.h>

template<typename C1> struct S1 {
  C1* p;
  S1(C1& c) : p(&c) {}
  void f(typename C1::T t){ p->g(t); }
};

template<typename C2> S1<C2> h(C2& x)
{
  return S1<C2>(x);
}

struct S2 {
  typedef int T;
  void g(T t)
  {
    printf("S2::g(T) called with %d\n", t);
  }
};

int main()
{
  S2 x;
  S1<S2> y = h(x);
  y.f(10);
  return 0;
}
