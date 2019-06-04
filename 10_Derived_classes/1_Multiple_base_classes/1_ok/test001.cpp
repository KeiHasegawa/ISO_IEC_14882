/*
 * A class shall not be specified as a direct base class of a derived class
 * more than once. [Note: a class can be an indirect base class more than once
 * and can be a direct and an indirect base class. There are limited things
 * that can be done with such a class. The non-static data members and member
 * functions of the direct base class cannot be referred to in the scope of
 * the derived class. However, the static members, enumerations and types can
 * be unambiguously referred to.
 */
#include <stdio.h>

class L {
public:
  int next;
};

class A : public L {
};

class B : public L {
};

class C : public A, public B {
public:
  void f();
};

class D : public A, public L {
public:
  void f();
};

void f(L* pl, A* pa, B* pb, C* pc, D* pd)
{
  printf("`f' called\n");
  pl->next = 1;
  pa->next = 2;
  pb->next = 3;
  pc->A::next = 4;
  pc->B::next = 5;
  pc->f();
  pd->A::next = 6;
  pd->f();
  printf("pl->next = %d, pa->next = %d, pb->next = %d\n",
	 pl->next, pa->next, pb->next);
  printf("pc->A::next = %d, pc->B::next = %d\n",
	 pc->A::next, pc->B::next);
  printf("pd->A::next = %d\n", pd->A::next);
}

int main()
{
  L l;
  A a;
  B b;
  C c;
  D d;
  f(&l,&a,&b,&c,&d);
  return 0;
}

void C::f()
{
  printf("`C::f' called\n");
  A::next = B::next;
}

void D::f()
{
  printf("`D::f' called\n");
}
