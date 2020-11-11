#include <stdio.h>

template<class C> struct S {
  C m;
  S() : m() {}
  S(const C& a) : m(a) {}
  template<class C2> S(const S<C2>& p) : m(p.m) {}
};

template<class C> bool f(const S<C>& x, const S<C>& y)
{
  return x.m == y.m ;
}

int main()
{
  S<int> si;
  printf("si.m = %d\n", si.m);
  S<int> si2(3);
  printf("si2.m = %d\n", si2.m);
  S<double> sd(si2);
  printf("sd.m = %f\n", sd.m);
  S<double> sd2(sd);
  printf("sd2.m = %f\n", sd2.m);
  if (f(si,si2))
    printf("error\n");
  else
    printf("ok\n");
  if (f(sd,sd2))
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}

