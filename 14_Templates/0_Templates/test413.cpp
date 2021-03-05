#include <stdio.h>

template<class C1>
void f(C1 a)
{
  printf("a = %d\n", a);
}

template<class C2>
void f(C2* p)
{
  printf("*p = %d\n", *p);
}

int main()
{
  f(1);
  int a = 2;
  f(&a);
  return 0;
}
