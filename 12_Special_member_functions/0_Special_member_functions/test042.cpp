#include <stdio.h>

int main()
{
  typedef int* T;
  T x = T(1);
  printf("x = %d\n", (int)x);
  T y = (T)2;
  printf("y = %d\n", (int)y);
  return 0;
}
