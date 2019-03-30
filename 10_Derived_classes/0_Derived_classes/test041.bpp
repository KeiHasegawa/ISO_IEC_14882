#include <stdio.h>

struct V { int v; };
struct A { int a; };
struct B : public A, public virtual V { int b; };
struct C : public A, public virtual V { int c; };
struct D : public B, public C { int d; };

int main()
{
  D x;
  x.v = 1;
  x.B::a = 2;
  x.b = 3;
  x.C::a = 4;
  x.c = 5;
  x.d = 6;
  printf("x.v = %d, x.B::a = %d, x.b = %d, x.C::a = %d, x.c = %d, x.d = %d\n",
	 x.v, x.B::a, x.b, x.C::a, x.c, x.d);
  B* bp;
  C* cp;
  V* vp;

  bp = &x;
  printf("bp->v = %d, bp->a = %d, bp->b = %d\n",
	 bp->v, bp->a, bp->b);
  cp = &x;
  printf("cp->v = %d, cp->a = %d, cp->b = %d\n",
	 cp->v, cp->a, cp->c);
  vp = &x;
  printf("vp->v = %d\n", vp->v);
  return 0;
}
