#include <stdio.h>

class A {
public:
  void f()
  {
    printf("A::f called\n");
  }
};

class B {
public:
  int f()
  {
    printf("B::f called\n");
    return 1234;
  }
};

class C : public A, public B { };

void f(C* cptr)
{
  cptr->A::f();
  printf("cptr->B::f return value : %d\n", cptr->B::f());
}

int main()
{
  C c;
  f(&c);
  return 0;
}
