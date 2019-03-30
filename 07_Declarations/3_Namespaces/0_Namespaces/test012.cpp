#include <stdio.h>

void f(int n)
{
  printf("f(int) called\n");
  printf("n = %d\n", n);
}

void f(int a, int b)
{
  printf("f(int, int) called\n");
  printf("a = %d, b = %d\n", a, b);
}

int main()
{
  int n = 2;
  ::f(n);
  ::f(n-3,n+3);
  return 0;
}
