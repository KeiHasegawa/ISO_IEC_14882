#include <stdio.h>

void f(int n)
{
  printf("f(int) called with %d\n", n);
}

void f(...)
{
  printf("f(...) called\n");
}

int main()
{
  f(3);
  f(3, 4);
  f(1.0);
  return 0;
}
