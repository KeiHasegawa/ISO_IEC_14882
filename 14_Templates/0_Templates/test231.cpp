#include <stdio.h>

template<class C1> struct S1 {
  C1 m;
};

template<class C2> struct S2 {
  C2* p;
};

int main()
{
  S2<S1<int>> x;
  S1<int> y;
  y.m = 123;
  x.p = &y;
  printf("x.p->m = %d\n", x.p->m);
  return 0;
}

