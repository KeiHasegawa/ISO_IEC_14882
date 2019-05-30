#include <stdio.h>

struct B;

B* p;

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

int main()
{
  p = new D;
  p->vf();
  return 0;
}
