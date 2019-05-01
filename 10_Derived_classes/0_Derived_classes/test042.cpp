#include <stdio.h>

struct V0 { int v0; };
struct V1 { int v1; };
struct V2 { int v2; };
struct V3 { int v3; };
struct V4 { int v4; };

struct A : virtual public V0,
           virtual public V1,
           virtual public V2,
           virtual public V3,
           virtual public V4
{
  int a;
};

void f(A* p)
{
  p->v0 = -p->v0;
  p->v1 = -p->v1;
  p->v2 = -p->v2;
  p->v3 = -p->v3;
  p->v4 = -p->v4;
  p->a = -p->a;

  printf("p->v0 = %d, p->v1 = %d, p->v2 = %d, p->v3 = %d, p->v4 = %d, p->a = %d\n",
	 p->v0, p->v1, p->v2, p->v3, p->v4, p->a);
}

int main()
{
  A x;
  x.v0 = 0;
  x.v1 = 1;
  x.v2 = 2;
  x.v3 = 3;
  x.v4 = 4;
  x.a = 5;
  printf("x.v0 = %d, x.v1 = %d, x.v2 = %d, x.v3 = %d, x.v4 = %d, x.a = %d\n",
	 x.v0, x.v1, x.v2, x.v3, x.v4, x.a);
  f(&x);

  V0* p0 = &x;
  printf("p0->v0 = %d\n", p0->v0);
  V1* p1 = &x;
  printf("p1->v1 = %d\n", p1->v1);
  V2* p2 = &x;
  printf("p2->v2 = %d\n", p2->v2);
  V3* p3 = &x;
  printf("p3->v3 = %d\n", p3->v3);
  V4* p4 = &x;
  printf("p4->v4 = %d\n", p4->v4);

  return 0;
}
