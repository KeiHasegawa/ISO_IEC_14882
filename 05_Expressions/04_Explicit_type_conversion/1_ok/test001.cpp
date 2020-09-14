#include <stdio.h>

int* f()
{
  static const int a = 456;
  return &(int&)a;
}

int main()
{
  printf("%d\n", *f());
  return 0;
}
