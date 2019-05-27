#include <stdio.h>

struct V { int v; };

struct A : virtual public V { int a; };

struct B : virtual public V { int b; };

struct C : public A, public B { int c; };

void f(C* pc)
{
  int V::* pm = &V::v;
  pc->*pm = 1;
}

void g(C* pc)
{
  int A::* pma = &A::a;
  pc->*pma = 2;
  int B::* pmb = &B::b;
  pc->*pmb = 3;
}

int main()
{
  C x;
  x.v = 4;
  x.a = 5;
  x.b = 6;
  x.c = 7;
  printf("x.v = %d, x.a = %d, x.b = %d, x.c = %d\n",
	 x.v, x.a, x.b, x.c);
  f(&x);
  printf("x.v = %d, x.a = %d, x.b = %d, x.c = %d\n",
	 x.v, x.a, x.b, x.c);
  g(&x);
  printf("x.v = %d, x.a = %d, x.b = %d, x.c = %d\n",
	 x.v, x.a, x.b, x.c);
  return 0;
}
