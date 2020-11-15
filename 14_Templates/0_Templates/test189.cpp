#include <stdio.h>

template<class A, class B> struct S1 {
  A a;
  B b;
  S1() : a(), b() { }
  S1(const A& aa, const B& bb) : a(aa), b(bb) { }
  template<class C, class D> S1(const S1<C, D>& s) : a(s.a), b(s.b) { }
};

template<typename A, typename B> void f(const S1<A, B>& x, const S1<A, B>& y)
{
  printf("x.a = %d, x.b = %f\n", x.a, x.b);
  printf("y.a = %d, y.b = %f\n", y.a, y.b);
}

template<class C2>  struct S2 {
  C2 m2;
};

template<class X, class Y> void f(const S2<X>& x, const S2<Y>& y)
{
  printf("x.m2 = %f, y.m2 = %f\n", x.m2, y.m2);
}

int main()
{
  S1<int, float> x1;
  x1.a = 1; x1.b = 2.0;
  S1<int, float> y1;
  f(x1, y1);

  S2<double> x2;
  S2<double> y2;
  x2.m2 = 3.0;
  y2.m2 = 4.0;
  f(x2, y2);
  
  return 0;
}
