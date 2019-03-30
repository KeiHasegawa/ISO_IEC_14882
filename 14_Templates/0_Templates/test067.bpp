#include <stdio.h>

template<class C> struct S {
  typedef int INT;
  S(INT);
};

template<class C> S<C>::S(INT n)
{
  printf("S<C>::S called with %d\n", n);
}

int main()
{
  S<double> sd(3);
  return 0;
}
