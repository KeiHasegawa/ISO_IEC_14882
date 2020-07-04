#include <stdio.h>

template<class C> void f(C);

int main()
{
  f(3);
  return 0;
}

template<class C> void f(C c)
{
  printf("f(C) called\n");
  printf("c = %d\n", c);
  c = 4;
  printf("c = %d\n", c);
}
