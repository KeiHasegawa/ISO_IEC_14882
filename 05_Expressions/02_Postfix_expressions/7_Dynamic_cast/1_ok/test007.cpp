#include <stdio.h>

struct V {
  virtual void vf()
  {
    printf("V::vf() called\n");
  }
};

struct A : V {};

struct B : V {};

struct D : A, B {
  int m;
};

void f(V* pv)
{
  D* pd = dynamic_cast<D*>(pv);
  printf("pd->m = %d\n", pd->m);
}

int main()
{
  D d;
  d.m = 1234;
  A* pa = &d;
  f(pa);
  B* pb = &d;
  f(pb);
  return 0;
}
