#include <stdio.h>

class B { public: virtual void f(); };

class D : public B { public: void f(); };

void g(B* p)
{
  p->B::f();
}

int main()
{
  D d;
  g(&d);
  return 0;
}

void B::f()
{
  printf("B::f called\n");
}

void D::f()
{
  printf("D::f called\n");
}
