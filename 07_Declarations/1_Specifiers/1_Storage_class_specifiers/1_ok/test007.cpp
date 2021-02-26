#include <stdio.h>

constexpr int f(int a, int b, int c, int d)
{
  return a * b + c * d;
}

void g(int n)
{
  switch (n) {
  case f(5, 6, 7, 8):
    printf("n is equal to f()\n");
    break;
  default:
    printf("n is not equal to f()\n");
    break;
  }
}

int main()
{
  g(87);
  g(86);
  return 0;
}
