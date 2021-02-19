#include <stdio.h>

struct X {
  int a;
};

struct Y {
  int X::* b;
};

int main()
{
  X x;
  Y y;
  y.b = &X::a;
  printf("x.*y.b = %d\n", x.*y.b = 1234);
  return 0;
}
