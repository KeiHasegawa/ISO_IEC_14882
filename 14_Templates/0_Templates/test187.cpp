#include <stdio.h>

template<class C> struct S1 {
  typedef typename C::X T;
  T t;
  T f(){ printf("S1::f() called\n"); return t; }
  void g(){ printf("S1::g() called\n"); f(); }
};

template<class C> void h(S1<C>& x)
{
  printf("h(S1<C>&) called\n");
  printf("x.f() return %d\n", x.f()); 
  x.g();
}

struct S2 {
  typedef int X;
};

int main()
{
  S1<S2> x;
  x.t = 1;
  h(x);
  return 0;
}
