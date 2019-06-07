/*
 * virtual functions with multiple base classes
 */
#include <stdio.h>

struct A {
  virtual void f();
};

struct B1 : A { // note non-virtual derivation
  void f();
};

struct B2 : A {
  void f();
};

struct D : B1, B2 { // D has two separate A sub-objects
};

void foo()
{
  D d;
  B1* b1p = &d;
  A* ap = b1p;
  D* dp = &d;
  ap->f(); // calls D::B1::f
}

int main()
{
  foo();
  return 0;
}

void A::f()
{
  printf("`A::f' called\n");
}

void B1::f()
{
  printf("`B1::f' called\n");
}

void B2::f()
{
  printf("`B2::f' called\n");
}
