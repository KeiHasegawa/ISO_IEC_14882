/*
 * a virtual member function does not have to be visible to be overridden.
 *
 * the function f(int) in class D hides the virtual function f() in its base
 * class B; D::f(int) is not a virtual function. However, f() declared in
 * class D2 has the same name and the same parameter list as B::f(), and
 * therefore is a virtual function that overrides the function B::f() even
 * though B::f() is not visible in class D2.
 */
#include <stdio.h>

struct B {
  virtual void f();
};

struct D : B {
  void f(int);
};

struct D2 : D {
  void f();
};

void g(B* pb)
{
  pb->f();  // call D2::f, which overrides B::f
}

int main()
{
  D2 d2;
  g(&d2);
  return 0;
}

void B::f()
{
  printf("`B::f' called\n");
}

void D::f(int n)
{
  printf("`D::f' called with %d\n", n);
}

void D2::f()
{
  printf("`D2::f' called\n");
}
