#include <stdio.h>

struct B {
  virtual void vf()
  {
    printf("B::vf() called\n");
  }
};

struct D : B {
  int m;
};

void f(B* pb)
{
  D* pd = dynamic_cast<D*>(pb);
  if (pd)
    printf("pd->m = %d\n", pd->m);
  else
    pb->vf();
}

int main()
{
  D d;
  d.m = 1234;
  f(&d);
  B b;
  f(&b);
  return 0;
}
