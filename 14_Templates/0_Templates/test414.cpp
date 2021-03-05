#include <stdio.h>

template<class C1>
void f(C1* p)
{
  printf("*p = %d\n", *p);
}

template<class C2>
void f(const C2* pc)
{
  printf("*pc = %d\n", *pc);
}

int main()
{
  int a = 1;
  f(&a);
  const int b = 2;
  f(&b);
  return 0;
}
