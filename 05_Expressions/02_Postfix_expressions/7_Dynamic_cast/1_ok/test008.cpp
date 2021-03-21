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

void f(V* pv)
{
  D* pd = dynamic_cast<D*>(pv);
  printf("pd->m = %d\n", pd->m);
}

int main()
{
  D d;
  d.m = 1234;
  f(&d);
  return 0;
}
