#include <stdio.h>

class X;

template<class C> void f(X&);

class X {
  int m;
  template<class C> friend void f(X&);
};

template<class C> void f(X& x)
{
  printf("x.m = %d\n", x.m = 1234);
  C c = x.m;
  printf("c = %f\n", c);
}

int main()
{
  X x;
  f<double>(x);
  return 0;
}
