#include <stdio.h>

template<class C1> struct S {
  C1 m;
};

template<class C2> using X = S<C2>;

int main()
{
  X<int> x;
  printf("x.m = %d\n", x.m = 123);
  return 0;
}
