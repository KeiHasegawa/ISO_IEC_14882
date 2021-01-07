#include <stdio.h>

void f(int b)
{
  int a;
  a = { b; };
  printf("a = %d\n", a);
}

int main()
{
  f(3);
  return 0;
}

