#include <stdio.h>

void f(int x, int y, int z)
{
  printf("`f' called\n");
  printf("x = %d, y = %d, z = %d\n", x, y, z);
}

void g()
{
  int a, t, c;
  a = 1;
  c = 9;
  f(a, (t=3, t+2), c);
}

int main()
{
  g();
  return 0;
}
