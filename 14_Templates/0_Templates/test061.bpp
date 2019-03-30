#include <stdio.h>

template<class C> struct S {
  static const int ci = 123;
};

template<class C> const int S<C>::ci;

int main()
{
  printf("S<double>::ci = %d\n", S<double>::ci);
  return 0;
}
