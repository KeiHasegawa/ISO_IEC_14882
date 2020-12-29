#include <stdio.h>

template<class C> struct S {
  C m;
};

using X = S<int>;

int main()
{
  X x;
  printf("x.m = %d\n", x.m = 123);
  return 0;
}
