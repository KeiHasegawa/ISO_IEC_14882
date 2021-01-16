#include <stdio.h>

template<class C1, class C2 = char> struct S {
  C1* c1;
  C2* c2;
};

template<class C3> struct X {
};

template<class C4> struct S<C4, X<C4*>> {
  C4 c4;
};

int main()
{
  S<int> x;
  int n = 123;
  x.c1 = &n;
  char a[] = "abc";
  x.c2 = &a[0];
  S<int, X<int*>> y;
  y.c4 = 456;
  printf("*x.c1 = %d,  x.c2 = \"%s\", y.c4 = %d\n", *x.c1, x.c2, y.c4);
  return 0;
}
