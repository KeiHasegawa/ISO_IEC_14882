#include <stdio.h>

float f(int a, int b)
{
  return double(b) + a;
}

int main()
{
  printf("f(3,5) = %f\n", f(3,5));
  return 0;
}
