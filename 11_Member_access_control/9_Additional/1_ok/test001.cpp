#include <stdio.h>

struct X {
  int a;
};

void f(X* p)
{
  printf("`f' called\n");
  printf("p->a = %d\n", p->a = 1);
}

union Y {
  X x;
  double d;
};

void g(Y* q)
{
  printf("`g' called\n");
  printf("q->x.a = %d\n", q->x.a = 2);
}

int main()
{
  X x;
  f(&x);
  Y y;
  g(&y);
  return 0;
}

