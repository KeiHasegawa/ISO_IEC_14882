/*
 * Explicit qualification with the scope operator (5.1) suppresses the virtual
 * call mechanism.
 */
#include <stdio.h>

class B { public: virtual void f(); };

class D : public B { public: void f(); };

void B::f()
{
  printf("`B::f' called\n");
}

void D::f()
{
  printf("`D::f' called\n");
  B::f();
}

void g(B* pb)
{
  printf("`g' called\n");
  pb->f();
}

int main()
{
  D d;
  g(&d);
  return 0;
}
