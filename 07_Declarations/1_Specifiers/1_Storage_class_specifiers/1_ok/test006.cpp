#include <stdio.h>

constexpr int f(int n)
{
  return n + 120;
}

void g(int n)
{
  switch (n) {
  case f(3):
    printf("n is equal to f()\n");
    break;
  default:
    printf("n is not equal to f()\n");
    break;
  }
}

int main()
{
  g(5);
  g(123);
  return 0;
}
