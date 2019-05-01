#include <stdio.h>

class A {
public:
  virtual void f() = 0;
  A()
  {
    A::f();
  }
};

void A::f()
{
  printf("A::f called\n");
}

class B : public A {
public:
  void f()
  {
    printf("B::f called\n");
  }
};

void f(A* p)
{
  p->f();
}

int main()
{
  B b;
  f(&b);
  return 0;
}
