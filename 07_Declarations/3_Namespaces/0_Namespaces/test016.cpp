#include <stdio.h>

class X {
  friend struct Y;
  static const int s = 1234;
};

struct Y {
  static const int s = X::s;
};

int main()
{
  printf("Y::s = %d\n", Y::s);
  return 0;
}
