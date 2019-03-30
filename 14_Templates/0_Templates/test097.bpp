#include <stdio.h>

template<class T1> struct S {
  T1 m;
  S()
  {
    printf("S::S() called\n");
    m = 1;
  }
  S(const S& s)
  {
    printf("S::S(const S&) called\n");
    m = s.m + 1;
  }
  template<class T2> S(const S<T2>& s)
  {
    printf("S::S(const S<T2>&) called\n");
    m = s.m * 5;
  }
};

int main()
{
  S<int> x;
  S<int> y = x;
  S<double> z = y;
  printf("x.m = %d, y.m = %d, z.m = %f\n", x.m, y.m, z.m);
  return 0;
}
