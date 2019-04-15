#include <stdio.h>

struct L { int l; };
struct A : public L { int a; };
struct B : public L { int b; };
struct C : public A, public B { int c; };

void f(L* pl)
{
  pl->l = -pl->l;
}

int main()
{
  C x;
  x.A::l = 1;
  x.a = 2;
  x.B::l = 3;
  x.b = 4;
  x.c = 5;
  f((A*)&x);
  f((B*)&x);
  printf("x.A::l = %d x.a = %d x.B::l = %d x.b = %d x.c = %d\n",
	 x.A::l, x.a, x.B::l, x.b, x.c);
  return 0;
}
