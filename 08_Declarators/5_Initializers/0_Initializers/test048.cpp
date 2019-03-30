#include <stdio.h>

struct X {
  static const int x = 1234;
};

int main()
{
  printf("X::x = %d\n", X::x);
  return 0;
}
