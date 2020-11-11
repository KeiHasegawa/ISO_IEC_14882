#include <stdio.h>

template<class C1> struct S1 {
  typedef C1 T1;
  C1 m1;
};

template<class> struct S2;

template<class C3> struct S3 : S1<typename S2<C3>::T2> {
  C3 m;
  typedef C3 T3;
  explicit S3(T3 x) : m(x) { }
};

template<typename C3> bool f(const S3<C3>& x, const S3<C3>& y)
{
  return x.m == y.m;
}

template<class C2> struct S2 {
  typedef double T2;
};


int main()
{
  S3<int> x(1);
  x.m1 = 2.0;
  printf("x.m = %d x.m1 = %f\n", x.m, x.m1);
  S3<int> y(1);
  y.m1 = 3.0;
  printf("y.m = %d y.m1 = %f\n", y.m, y.m1);
  if (f(x, y))
    printf("ok\n");
  else
    printf("ok\n");
  return 0;
}
