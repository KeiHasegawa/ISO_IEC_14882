#include <stdio.h>

double f();

int main()
{
  auto a = f();
  printf("a = %f\n", a);
  return 0;
}

double f()
{
  return -0.25;
}
