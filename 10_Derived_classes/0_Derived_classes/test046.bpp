#include <stdio.h>

class B {
public:
  virtual void f();
};

class D : public B {
};

void g(B* bp)
{
  bp->f();
}

int main()
{
  B b;
  g(&b);
  D d;
  g(&d);
  return 0;
}

void B::f()
{
  printf("B::f called\n");
}
