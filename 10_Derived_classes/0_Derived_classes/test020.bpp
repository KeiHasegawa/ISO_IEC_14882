#include <stdio.h>

class A { public: void f(); };
class B { public: int f(); };
class C : public A, public B { };

void f(C* cptr)
{
  A* aptr = cptr;
  aptr->f();
  B* bptr = cptr;
  printf("bptr->f() return value : %d\n", bptr->f());
}

int main()
{
  C c;
  f(&c);
  return 0;
}

void A::f()
{
  printf("A::f called\n");
}

int B::f()
{
  printf("B::f called\n");
  return 5678;
}
