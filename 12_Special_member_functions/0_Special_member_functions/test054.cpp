#include <stdio.h>

class X {
public:
  int a;
  const int& r;
  X() : r(a) {}
};

int main()
{
  X x;
  x.a = 1;
  printf("x.r = %d\n", x.r);
  return 0;
}
