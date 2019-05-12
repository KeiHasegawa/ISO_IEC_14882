#include <stdio.h>

struct B { int b; };

struct D : public virtual B { int d; };

void f(D* pd)
{
  pd->b = 1;
}


int main()
{
  D x;
  x.b = 2;
  x.d = 3;
  printf("x.b = %d, x.d = %d\n", x.b, x.d);
  f(&x);
  printf("x.b = %d, x.d = %d\n", x.b, x.d);
  return 0;
}
