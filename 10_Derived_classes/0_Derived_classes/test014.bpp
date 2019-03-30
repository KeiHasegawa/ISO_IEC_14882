#include <stdio.h>

struct V { public: int v; };
struct A { public: int a; };
struct B : public A, public virtual V {};
struct C : public A, public virtual V {};

struct D : public B, public C { public: void f(); };

void D::f()
{
  --v;
}

void g(D* pd)
{
  --pd->v;
}

int main()
{
  D x;
  x.v = 1;
  x.B::a = 2;
  x.C::a = 3;
  printf("x.v = %d x.B::a = %d x.C::a = %d\n",
	 x.v, x.B::a, x.C::a);
  x.f();
  printf("x.v = %d x.B::a = %d x.C::a = %d\n",
	 x.v, x.B::a, x.C::a);
  g(&x);
  printf("x.v = %d x.B::a = %d x.C::a = %d\n",
	 x.v, x.B::a, x.C::a);
  return 0;
}
