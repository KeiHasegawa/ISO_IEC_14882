#include <stdio.h>

struct L { int l; };
struct A : public L { int a; };
struct B : public L { int b; };
struct C : public A, public B { int c; };

void fa(A*, bool);
void fb(B*, bool);

void fl(L* pl, bool flag)
{
  printf("pl->l = %d\n", pl->l);
  if ( flag )
    fa((A*)pl,false);
  else
    fb((B*)pl,false);
}

void fc(C*, bool);

void fa(A* pa, bool flag)
{
  printf("pa->l = %d pa->a = %d\n", pa->l, pa->a);
  if ( flag )
    fl(pa,true);
  else
    fc((C*)pa,false);
}

void fb(B* pb, bool flag)
{
  printf("pb->l = %d pb->b = %d\n", pb->l, pb->b);
  if ( flag )
    fl(pb,false);
  else
    fc((C*)pb,false);
}

void fc(C* pc, bool flag)
{
  printf("pc->A::l = %d pc->a = %d pc->B::l = %d pc->b = %d pc->c = %d\n",
	 pc->A::l, pc->a, pc->B::l, pc->b, pc->c);
  if ( flag ){
    fa(pc,true);
    fb(pc,true);
  }
}

int main()
{
  C x;
  x.A::l = 1;
  x.a = 2;
  x.B::l = 3;
  x.b = 4;
  x.c = 5;
  fc(&x,true);
  return 0;
}
