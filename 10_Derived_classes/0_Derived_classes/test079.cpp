#include <stdio.h>

struct S {
  int m;
};

typedef S T;

struct D : T {
  double d;
};

int main()
{
  D x;
  x.m = 1;
  x.d = 2.0;
  printf("x.m = %d x.d = %f\n", x.m, x.d);
  return 0;
}
