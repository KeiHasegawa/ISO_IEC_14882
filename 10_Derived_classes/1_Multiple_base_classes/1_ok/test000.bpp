/*
 * A class can be derived from any number of base classes. [Note: the use of
 * more than one direct base class is often called multiple inheritance.
 */
#include <stdio.h>

class A {
public:
  int i;
};

class B {
public:
  int j;
};

class C {
public:
  int k;
};

class D : public A, public B, public C {
public:
  int l;
};

void f(A* pa, B* pb, C* pc, D* pd)
{
  pa->i = 1;
  pb->j = 2;
  pc->k = 3;
  pd->i = 4;
  pd->j = 5;
  pd->k = 6;
  pd->l = 7;
  printf("pa->i = %d, pb->j = %d, pc->k = %d\n",
	 pa->i, pb->j, pc->k);
  printf("pd->i = %d, pd->j = %d, pd->k = %d, pd->l = %d\n",
	 pd->i, pd->j, pd->k, pd->l);
}

int main()
{
  A a;
  B b;
  C c;
  D d;
  f(&a,&b,&c,&d);
  return 0;
}
