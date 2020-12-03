#include <stdio.h>

template<class C> void f(C a)
{
  printf("a = %d\n", a);
}

template<class C> void f(C);

int main()
{
  f(5);
  return 0;
}
