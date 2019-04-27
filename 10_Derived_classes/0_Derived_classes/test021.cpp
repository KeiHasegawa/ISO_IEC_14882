#include <stdio.h>

class A { public: void f(); };
class B { public: int f(); };
class C : public A, public B {
public:
  int f()
  {
    printf("C::f called\n");
    A::f(); return B::f();
  }
};

void f(C* cptr)
{
  printf("cptr->f() return value : %d\n", cptr->f());
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
  return -5;
}
 
