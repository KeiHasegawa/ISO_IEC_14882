#include <stdio.h>

template<class C1> struct S1 {
  typedef C1 T1;
  T1 a;
};

template<class C2> struct S2 {
  typedef typename C2::T1 T2;
};

template<class C3> struct S3 : S1<typename S2<C3>::T2> {
  C3 m;
};

template<class C4> bool g(S1<C4> x, S1<C4> y)
{
  return x.a == y.a;
} 

template<class C3> bool f(const S3<C3>& x, const S3<C3>& y)
{
  return g(x.m, y.m);
}

int main()
{
  S3<S1<int> > x;
  x.m.a = 1;
  printf("x.m.a = %d\n", x.m.a);
  S3<S1<int> > y;
  y.m.a = 2;
  printf("y.m.a = %d\n", y.m.a);
  if (f(x, y))
    printf("error\n");
  else
    printf("ok\n");
  return 0;
}
