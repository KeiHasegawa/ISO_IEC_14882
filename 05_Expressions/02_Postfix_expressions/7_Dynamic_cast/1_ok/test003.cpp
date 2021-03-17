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
  printf("pd->m = %d\n", pd->m);
}

int main()
{
  D d;
  d.m = 1234;
  f(&d);
  return 0;
}
