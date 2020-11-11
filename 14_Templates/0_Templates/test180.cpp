#include <stdio.h>

template<class C1> struct S1 {
  typedef C1 T1;
  C1* p;
};

template<class> struct S2;

template<class C2> struct S3 : S1<typename S2<C2>::T2> {
  C2 m;
  typedef S2<C2> S2C2;
  typedef typename S2C2::T2 T2;
};

template<class C3> bool f(const S3<C3>& x, const S3<C3>& y)
{
  return x.m == y.m;
}

template<class C2> struct S2 {
  typedef C2 T2;
};

int main()
{
  S3<int> x;
  x.m = 1;
  x.p = &x.m;
  printf("x.m = %d *x.p = %d\n", x.m, *x.p);
  S3<int> y;
  y.m = 2;
  y.p = &y.m;
  printf("y.m = %d *y.p = %d\n", y.m, *y.p);
  if (f(x,y))
    printf("error\n");
  else
    printf("ok\n");
  return 0;
}
