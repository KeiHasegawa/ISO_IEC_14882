#include <stdio.h>

template<class C> struct X {
  typedef int T;
  void f(T);
};

template<class C> void X<C>::f(T t)
{
  printf("t = %d\n", t);
}

int main()
{
  X<double> xd;
  int n = 3;
  xd.f(n);
  return 0;
}
