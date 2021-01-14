#include <stdio.h>

template<class C> struct S {
  using T = C;
  T m;
};

int main()
{
  S<int> x;
  printf("x.m = %d\n", x.m = 123);
  return 0;
}
