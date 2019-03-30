#include <stdio.h>

struct A { int a; };
struct B1 : virtual public A { int b1; };
struct B2 : virtual public A { int b2; };
struct C : public B1, public B2 { int c; };
struct D : public C { int d; };
struct E1 : virtual public D { int e1; };
struct E2 : virtual public D { int e2; };
struct F : public E1, public E2 { int f; void g(); };

void F::g()
{
  a++;
}

void h(F* p)
{
  p->a++;
}

int main()
{
  F x;
  x.a = 1;
  x.b1 = 2;
  x.b2 = 3;
  x.c = 4;
  x.d = 5;
  x.e1 = 6;
  x.e2 = 7;
  x.f = 8;
  printf("x.a = %d, x.b1 = %d, x.b2 = %d, x.c = %d, x.d = %d, x.e1 = %d, x.e2 = %d, x.f = %d\n",
	 x.a, x.b1, x.b2, x.c, x.d, x.e1, x.e2, x.f);
  x.g();
  printf("x.a = %d, x.b1 = %d, x.b2 = %d, x.c = %d, x.d = %d, x.e1 = %d, x.e2 = %d, x.f = %d\n",
	 x.a, x.b1, x.b2, x.c, x.d, x.e1, x.e2, x.f);
  h(&x);
  printf("x.a = %d, x.b1 = %d, x.b2 = %d, x.c = %d, x.d = %d, x.e1 = %d, x.e2 = %d, x.f = %d\n",
	 x.a, x.b1, x.b2, x.c, x.d, x.e1, x.e2, x.f);
  return 0;
}
