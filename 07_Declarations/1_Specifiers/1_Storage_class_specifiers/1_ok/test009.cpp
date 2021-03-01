#include <stdio.h>

struct Tx {};

constexpr int f(Tx)
{
  return 5;
}

struct Ty {};

constexpr int f(Ty)
{
  return 10;
}

void f(int n)
{
  switch (n) {
  case f(Tx()):
    printf("n is equal to f(Tx())\n");
    break;
  case f(Ty()):
    printf("n is equal to f(Ty())\n");
    break;
  default:
    printf("n is not equal to either f(Tx()) or f(Ty())\n");
    break;
  }
}

int main()
{
  f(5);
  f(10);
  f(15);
  return 0;
}
