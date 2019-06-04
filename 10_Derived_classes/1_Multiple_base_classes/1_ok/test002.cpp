/*
 * diamond inheritance.
 */
#include <stdio.h>

class V {
public:
  int v;
};

class A : virtual public V {
public:
  int a;
};

class B : virtual public V {
public:
  int b;
};

class C : public A, public B {
public:
  int c;
};

void f(V* pv, A* pa, B* pb, C* pc)
{
  printf("`f' called\n");
  pv->v = 1;
  pa->v = 2;
  pa->a = 3;
  pb->v = 4;
  pb->b = 5;
  pc->v = 6;
  pc->a = 7;
  pc->b = 8;
  pc->c = 9;
  printf("pv->v = %d\n", pv->v);
  printf("pa->v = %d, pa->a = %d\n", pa->v, pa->a);
  printf("pb->v = %d, pb->b = %d\n", pb->v, pb->b);
  printf("pc->v = %d, pc->a = %d, pc->b = %d, pc->c = %d\n",
	 pc->v, pc->a, pc->b, pc->c);
}

int main()
{
  V v;
  A a;
  B b;
  C c;
  f(&v,&a,&b,&c);
  return 0;
}
