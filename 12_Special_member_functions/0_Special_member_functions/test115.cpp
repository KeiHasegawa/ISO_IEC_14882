#include <stdio.h>

struct T {
  int m;
  T(int mm) : m(mm) {}
};

int a = -1;

T x(a);

int b = -2;

T y = b;

T xx(1);

T yy = 2;

int main()
{
  printf("a = %d\n", a);
  printf("b = %d\n", b);
  printf("x.m = %d\n", x.m);
  printf("y.m = %d\n", y.m);
  printf("xx.m = %d\n", xx.m);
  printf("yy.m = %d\n", yy.m);
  return 0;
}
