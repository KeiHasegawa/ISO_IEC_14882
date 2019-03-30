#include <stdio.h>

struct B {
  virtual void vf()
  {
    printf("B::vf() called\n");
  }
};

struct D : public B {
  void vf()
  {
    printf("D::vf() called\n");
  }
};

void f(B* pb, void (B::*pf)())
{
  (pb->*pf)();
}

int main()
{
  B b;
  f(&b,&B::vf);
  D d;
  f(&d,&B::vf);
  return 0;
}
