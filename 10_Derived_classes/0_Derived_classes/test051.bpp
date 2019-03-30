#include <stdio.h>

struct A { int a; };
struct B : public A { int b; };
struct C1 : virtual public B { int c1; };
struct C2 : virtual public B { int c2; };
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
  D d;
  d.a = 1;
  d.b = 2;
  d.c1 = 3;
  d.c2 = 4;
  d.d = 5;
  printf("d.a = %d, d.b = %d, d.c1 = %d, d.c2 = %d, d.d = %d\n",
	 d.a, d.b, d.c1, d.c2, d.d);
  d.f();
  printf("d.a = %d, d.b = %d, d.c1 = %d, d.c2 = %d, d.d = %d\n",
	 d.a, d.b, d.c1, d.c2, d.d);
  g(&d);
  printf("d.a = %d, d.b = %d, d.c1 = %d, d.c2 = %d, d.d = %d\n",
	 d.a, d.b, d.c1, d.c2, d.d);
  return 0;
}
