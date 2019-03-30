#include <stdio.h>

struct B {
  int b;
};

struct D : public B {
  int d;
};

void f(B* pb)
{
  pb->b = 3;
}

int main()
{
  D x;
  x.b = 1;
  x.d = 2;
  f(&x);
  printf("x.b = %d x.d = %d\n", x.b, x.d);
  return 0;
}
