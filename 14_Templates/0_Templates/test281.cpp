#include <stdio.h>

template<class C>
void f(C a, int b = 0)
{
  printf("a = %f, b = %d\n", a , b);
}

int main()
{
  f(1.0,2);
  f(3.0);
  return 0;
}
