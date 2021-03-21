#include <stdio.h>

struct V {
  int m;
};

struct A : virtual V {};

void f(A* pa)
{
  V* pv = dynamic_cast<V*>(pa);
  printf("pv->m = %d\n", pv->m);
}

int main()
{
  A a;
  a.m = 5678;
  f(&a);
  return 0;
}
