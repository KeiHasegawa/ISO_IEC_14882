#include <stdio.h>

template<class C> struct X {
  typedef int T;
  void f(const T*);
};

template<class C> void X<C>::f(const T* ptr)
{
  printf("*ptr = %d\n", *ptr);
}

int main()
{
  X<double> xd;
  int n = 3;
  xd.f(&n);
  return 0;
}
