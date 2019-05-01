#include <stdio.h>

struct V0 { int v0; };
struct V1 { int v1; };

struct A : virtual public V0, virtual public V1 { int a; };
struct B : virtual public V0, virtual public V1 { int b; };

struct C : public A, public B { int c; };

void f(C* p)
{
  p->v0 = -p->v0;
  p->v1 = -p->v1;
  p->a = -p->a;
  p->b = -p->b;
  p->c = -p->c;
}

int main()
{
  C x;
  x.v0 = 1;
  x.v1 = 2;
  x.a = 3;
  x.b = 4;
  x.c = 5;
  printf("x.v0 = %d, x.v1 = %d, x.a = %d, x.b = %d, x.c = %d\n",
	 x.v0, x.v1, x.a, x.b, x.c);
  f(&x);
  printf("x.v0 = %d, x.v1 = %d, x.a = %d, x.b = %d, x.c = %d\n",
	 x.v0, x.v1, x.a, x.b, x.c);
  V0* p0 = &x;
  p0->v0 = 6;
  V1* p1 = &x;
  p1->v1 = 7;
  printf("x.v0 = %d, x.v1 = %d, x.a = %d, x.b = %d, x.c = %d\n",
	 x.v0, x.v1, x.a, x.b, x.c);
  return 0;
}
