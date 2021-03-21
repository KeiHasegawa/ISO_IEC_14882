#include <stdio.h>

struct V {
  virtual void vf()
  {
    printf("V::vf() is called\n");
  }
};

struct A : virtual V {
  int m;
};

void f(V* p)
{
  p->vf();
  A* pa = dynamic_cast<A*>(p);
  if (pa)
    printf("pa->m = %d\n", pa->m);
}

int main()
{
  V v;
  f(&v);
  printf("\n");
  A a;
  a.m = 1234;
  f(&a);
  return 0;
}

