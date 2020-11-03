#include <stdio.h>

template<class C1> struct S1 {
  typedef C1 T1;
};

template<class C2> struct S2 : S1<C2>::T1 {};

struct X {
  int m;
};

int main()
{
  S2<X> sx;
  sx.m = 345;
  printf("sx.m = %d\n", sx.m);
  return 0;
}
