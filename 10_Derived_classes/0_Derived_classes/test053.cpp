#include <stdio.h>

struct A { int a; };
struct B1 : virtual public A { int b1; };
struct B2 : virtual public A { int b2; };
struct C1 : public B1 { int c1; };
struct C2 : public B2 { int c2; };
struct D : public C1, public C2 { int d; void f(); };

void D::f()
{
  a++;
}

void g(D* p)
{
  p->a++;
}

int main()
{
  D x;
  x.a = 1;
  x.b1 = 2;
  x.b2 = 3;
  x.c1 = 4;
  x.c2 = 5;
  x.d = 6;
  printf("x.a = %d, x.b1 = %d, x.b2 = %d, x.c1 = %d, x.c2 = %d, x.d = %d\n",
	 x.a, x.b1, x.b2, x.c1, x.c2, x.d);
  x.f();
  printf("x.a = %d, x.b1 = %d, x.b2 = %d, x.c1 = %d, x.c2 = %d, x.d = %d\n",
	 x.a, x.b1, x.b2, x.c1, x.c2, x.d);
  g(&x);
  printf("x.a = %d, x.b1 = %d, x.b2 = %d, x.c1 = %d, x.c2 = %d, x.d = %d\n",
	 x.a, x.b1, x.b2, x.c1, x.c2, x.d);
  return 0;
}
