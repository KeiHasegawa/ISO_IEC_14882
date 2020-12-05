#include <stdio.h>

template<class C> struct S {
  C m;
  int f() const { return g(m); }
  template<class C2> static int g(C2 t){ return t.h(); }
};

template<class C> int f2(const S<C>& x, const S<C>& y)
{
  return x.f() + y.f();
}

template<class C> int g2(const S<C>& x, const S<C>& y)
{
  return x.f() - y.f();
}

template<class C> int h2(const S<C>& x, const S<C>& y)
{
  return x.f() * y.f();
}

struct T {
  int a;
  int h(){ return a; }
};

int main()
{
  S<T> x;
  x.m.a = 1;
  S<T> y;
  y.m.a = 2;
  printf("f2(x, y) return %d\n", f2(x, y));
  printf("g2(x, y) return %d\n", g2(x, y));
  printf("h2(x, y) return %d\n", h2(x, y));
  return 0;
}
