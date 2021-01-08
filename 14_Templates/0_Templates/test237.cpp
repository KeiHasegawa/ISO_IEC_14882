#include <stdio.h>

template<class> struct S {
  double m;
};

template<class C1, class C2> struct S<C1 C2::*> {
  C1 c1;
  C2 c2;
};

struct X {
  char x[10];
};

int main()
{
  S<int> si;
  printf("si.m = %f\n", si.m = 1.5);
  S<int X::*> six;
  printf("six.c1 = %d\n", six.c1 = 2);
  six.c2.x[0] = 'a';
  six.c2.x[1] = 'b';
  six.c2.x[2] = 'c';
  six.c2.x[3] = '\0';
  printf("six.c2.x = \"%s\"\n", six.c2.x);
  return 0;
}
