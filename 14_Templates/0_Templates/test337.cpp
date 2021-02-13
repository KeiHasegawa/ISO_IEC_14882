#include <stdio.h>

struct S {
  char m[3];
};

struct B {
  S a;
};

template<class C1> struct D1 : B {
  typedef decltype(a) T;
};

template<class C2> struct D2 : D1<C2>::T {};

int main()
{
  D2<double> x;
  x.m[0] = 'a';
  x.m[1] = 'b';
  x.m[2] = '\0';
  printf("x.m = \"%s\"\n", x.m);
  return 0;
}
