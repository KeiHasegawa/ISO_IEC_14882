#include <stdio.h>

class X {
  int x;
public:
  X(int xx) : x(xx) {}
  operator int()
  { return x; }
};

int main()
{
  X a(5);
  int n = a;
  printf("n = %d\n", n);
  return 0;
}
