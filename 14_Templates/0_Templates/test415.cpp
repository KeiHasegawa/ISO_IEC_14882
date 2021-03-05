#include <stdio.h>

template<class C1>
void f(C1* p)
{
  printf("*p = %d\n", *p);
}

template<class C2>
void f(volatile C2* pv)
{
  printf("*pv = %d\n", *pv);
}

int main()
{
  int a = 1;
  f(&a);
  volatile int b = 2;
  f(&b);
  return 0;
}
