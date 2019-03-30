#include <stdio.h>

class B { public: virtual void f(); };

class D : public B { public: bool flag; void f(); };

void D::f()
{
  printf("D::f called\n");
  if ( flag ){
    flag = false;
    f();
  }
}

void g(B* bp)
{
  bp->f();
}

int main()
{
  D d;
  d.flag = true;
  g(&d);
  return 0;
}

void B::f()
{
  printf("B::f called\n");
}
