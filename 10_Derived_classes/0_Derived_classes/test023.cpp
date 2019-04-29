#include <stdio.h>

class B { public: virtual void f(); };

class D : public B { public: void f(); };

void D::f()
{
  printf("D::f called\n");
  B::f();
}

void g(B* bp)
{
  bp->f();
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
