#include <stdio.h>

void f(int a)
{
  printf("f called with %d\n", a);
}

void g(const int& a)
{
  printf("g called with %d\n", a);
}

int main()
{
  f(2.2);
  g(2.2);
  return 0;
}
