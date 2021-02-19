#include <stdio.h>

struct X {
  int a;
};

struct Y {
  int X::* b;
};

struct Z {
  Y c;
};

int main()
{
  X x;
  Z z;
  z.c.b = &X::a;
  printf("x.*z.c.b = %d\n", x.*z.c.b = 1234);
  return 0;
}
