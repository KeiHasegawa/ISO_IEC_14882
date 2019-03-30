#include <stdio.h>

struct M { int m; };

struct X { M m; };

int main()
{
  X x;
  x.m.m = 1;
  printf("x.m.m = %d\n", x.m.m);
  return 0;
}
