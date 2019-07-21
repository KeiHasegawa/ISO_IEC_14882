#include <stdio.h>

class X {
  int x;
public:
  X(int xx) : x(xx) {}
  operator int()
  { return x; }
};

void f(int a)
{
  printf("a = %d\n", a);
}

int main()
{
  X a(3);
  f(a);
  return 0;
}
