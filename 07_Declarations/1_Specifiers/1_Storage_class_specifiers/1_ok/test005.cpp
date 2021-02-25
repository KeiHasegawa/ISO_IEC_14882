#include <stdio.h>

constexpr int f()
{
  return 123;
}

void g(int n)
{
  switch (n) {
  case f():
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
