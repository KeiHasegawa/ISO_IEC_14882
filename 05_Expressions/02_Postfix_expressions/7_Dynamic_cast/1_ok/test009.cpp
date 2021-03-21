#include <stdio.h>

struct V {
  virtual void vf()
  {
    printf("V::vf() called\n");
  }
};

struct A : virtual V {};

struct B : virtual V {};

struct D : A, B {
  int m;
};

void f(A* pa)
{
  D* pd = dynamic_cast<D*>(pa);
  printf("pd->m = %d @ `f'\n", pd->m);
}

void g(B* pb)
{
  D* pd = dynamic_cast<D*>(pb);
  printf("pd->m = %d @ `g'\n", pd->m);
}

int main()
{
  D d;
  d.m = 1234;
  f(&d);
  g(&d);
  return 0;
}
