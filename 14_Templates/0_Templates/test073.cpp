#include <stdio.h>

template<class C> struct S {
  typedef int INT;
};

template<class X> void f(typename X::INT n)
{
  printf("f called with %d\n", n);
}

int main()
{
  f< S<double> >(3);
  return 0;
}
