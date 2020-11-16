#include <stdio.h>

template<class, class> struct S1 {
  enum { V = 0 };
  typedef int T1;
};

template<bool, class> struct S2 {};

template<class A, class B> struct S3 {
  A m;
  S3() : m(A()) {}
  template<class C>
  S3(const S3<C, typename S2<(S1<C, typename B::T2>::V),B>::T1>& i)
    : m(i.m) {}
};

template<class A2, class B2, class C2>
void f(const S3<A2, C2>& x, const S3<B2, C2>& y)
{
  printf("x.m = %f y.m = %d\n", x.m, (int)y.m);
}

struct S4 {
  typedef char T2;
};

int main()
{
  S3<double, S4> x;
  x.m = 1.0;
  S3<int, S4> y;
  y.m = 2;
  f(x, y);
  S3<float, S4> x2;
  x2.m = 3.0;
  S3<float, S4> y2 = x2;
  f(x2, y2);
  return 0;
}
