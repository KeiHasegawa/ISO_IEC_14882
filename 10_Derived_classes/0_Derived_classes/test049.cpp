#include <stdio.h>

struct L { int l; };
struct A : public L { int a; };
struct B : public L { int b; };
struct C : public A, public B { int c; void f(); };

void f(B* bp)
{
  printf("bp->l = %d, bp->b = %d\n", bp->l, bp->b);
}

int main()
{
  C c;
  c.A::l = 1;
  c.a = 2;
  c.B::l = 3;
  c.b = 4;
  c.c = 5;
  printf("c.A::l = %d, c.a = %d, c.B::l = %d, c.b = %d, c.c = %d\n",
	 c.A::l, c.a, c.B::l, c.b, c.c);
  f(&c);
  return 0;
}
