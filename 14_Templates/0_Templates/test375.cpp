#include <stdio.h>

template<class C1, template<class C2> class X> struct S {
  C1 c1;
  X<C1> xc;
};

template<class C3> struct Y {
  C3 c3;
};

int main()
{
  S<int, Y> sy;
  printf("sy.c1 = %d, sy.xc.c3 = %d\n", sy.c1 = 1, sy.xc.c3 = 2);
  return 0;
}
