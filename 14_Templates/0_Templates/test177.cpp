#include <stdio.h>

template<class> struct S1;

template<class C2> struct S2 {
  typedef C2 T2;
};

template<class C3> struct S3 : S2<typename S1<C3>::T2>  {
  C3 m;
  typedef typename S1<C3>::T2 T2;
  T2 f() const { return g(m); }
  template<class X1> static X1* g(X1* p){ return p; }
  template<class X2> static T2 g(X2 t) { return t.f(); }
};

template<class C4> void h(const S3<C4>& x, const S3<C4>& y)
{
  printf("x.m.a = %d\n", x.m.a);
  printf("y.m.a = %d\n", y.m.a);
}

template<class C1> struct S1 {
  typedef C1 T2;
};

struct X {
  int a;
  X f()
  {
    printf("X::f() called a = %d\n", a);
    return *this;
  }
};

int main()
{
  S3<X> x;
  x.m.a = 123;
  x.f();
  S3<X> y;
  y.m.a = 456;
  y.f();
  h(x, y);
  return 0;
}
