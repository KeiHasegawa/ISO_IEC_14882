#include <stdio.h>

int* f()
{
  static int a = 123;
  return &(int&)a;
}

int main()
{
  printf("%d\n", *f());
  return 0;
}
