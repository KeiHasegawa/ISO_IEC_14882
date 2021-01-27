#include <stdio.h>

template<class C>
int f(C a, int b= 0)
{
  printf("a = %d, b = %d\n", a, b);
  return 0;
}

int f(...)
{
  printf("f(...) called\n");
  return 0;
}

int main()
{
  f(1,2);
  f(3);
  f();
  return 0;
}
