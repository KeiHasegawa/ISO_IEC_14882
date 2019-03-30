#include <stdio.h>

struct T {};

template<class C> void f(C c, T)
{
  printf("f(C,T) called\n");
  printf("c = %d\n", c);
}

int main()
{
  int n = 1;
  T t;
  f(n,t);
  return 0;
}
