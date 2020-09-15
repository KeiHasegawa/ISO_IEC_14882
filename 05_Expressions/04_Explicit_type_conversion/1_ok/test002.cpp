#include <stdio.h>

int* f()
{
  static const int a = 789;
  return &((int&)((char&)a));
}

int main()
{
  printf("%d\n", *f());
  return 0;
}
