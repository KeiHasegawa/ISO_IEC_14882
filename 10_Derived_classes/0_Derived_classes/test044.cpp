#include <stdio.h>

struct V0 { int v0; };
struct V1 { int v1; };
struct V2 { int v2; };
struct V3 { int v3; };

struct A : virtual public V0, virtual public V1, virtual public V2 { int a; };
struct B : virtual public V1, virtual public V2, virtual public V3 { int b; };
struct C : virtual public V0, public A, public B, virtual public V3 { int c; };

void f(C* p)
{
  p->v0 = -p->v0;
  p->B::v1 = -p->B::v1;
  p->B::v2 = -p->B::v2;
  p->v3 = -p->v3;
  p->a = -p->a;
  p->b = -p->b;
  p->c = -p->c;
}

int main()
{
  C x;
  x.v0 = 1;
  x.A::v1 = 2;
  x.A::v2 = 3;
  x.v3 = 4;
  x.a = 5;
  x.b = 6;
  x.c = 7;
  printf("x.v0 = %d, x.B::v1 = %d, x.B::v2 = %d, x.v3 = %d, x.a = %d, x.b = %d, x.c = %d\n",
	 x.v0, x.B::v1, x.B::v2, x.v3, x.a, x.b, x.c);
  f(&x);
  printf("x.v0 = %d, x.B::v1 = %d, x.B::v2 = %d, x.v3 = %d, x.a = %d, x.b = %d, x.c = %d\n",
	 x.v0, x.B::v1, x.B::v2, x.v3, x.a, x.b, x.c);
  V0* pv0 = &x;
  pv0->v0 = 8;
  V3* pv3 = &x;
  pv3->v3 = 9;
  printf("x.v0 = %d, x.B::v1 = %d, x.B::v2 = %d, x.v3 = %d, x.a = %d, x.b = %d, x.c = %d\n",
	 x.v0, x.B::v1, x.B::v2, x.v3, x.a, x.b, x.c);
  A* pa = &x;
  pa->v0 = 10;
  pa->v1 = 11;
  pa->v2 = 12;
  printf("x.v0 = %d, x.B::v1 = %d, x.B::v2 = %d, x.v3 = %d, x.a = %d, x.b = %d, x.c = %d\n",
	 x.v0, x.B::v1, x.B::v2, x.v3, x.a, x.b, x.c);
  B* pb = &x;
  pb->v1 = 13;
  pb->v2 = 14;
  pb->v3 = 15;
  printf("x.v0 = %d, x.B::v1 = %d, x.B::v2 = %d, x.v3 = %d, x.a = %d, x.b = %d, x.c = %d\n",
	 x.v0, x.B::v1, x.B::v2, x.v3, x.a, x.b, x.c);
  V1* pv1 = pa;
  pv1->v1 = 16;
  printf("x.v0 = %d, x.B::v1 = %d, x.B::v2 = %d, x.v3 = %d, x.a = %d, x.b = %d, x.c = %d\n",
	 x.v0, x.B::v1, x.B::v2, x.v3, x.a, x.b, x.c);
  V2* pv2 = pb;
  pv2->v2 = 17;
  printf("x.v0 = %d, x.B::v1 = %d, x.B::v2 = %d, x.v3 = %d, x.a = %d, x.b = %d, x.c = %d\n",
	 x.v0, x.B::v1, x.B::v2, x.v3, x.a, x.b, x.c);
  return 0;
}
