#include <stdio.h>

struct X {
  operator int();
};

int main()
{
  X x;
  int y = x;
  printf("y = %d\n", y);
  return 0;
}

X::operator int()
{
  printf("X::operator int() called\n");
  return 1;
}
