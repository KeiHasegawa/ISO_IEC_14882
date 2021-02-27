#include <stdio.h>

struct S {
  constexpr operator int() const { return 5; }
};

void f(int n)
{
  switch (n) {
  case S():
    printf("n is equal to S()\n");
    break;
  default:
    printf("n is not equal to S()\n");
    break;
  }
}

int main()
{
  f(4);
  f(5);
  return 0;
}
