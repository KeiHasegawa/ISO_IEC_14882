#include <stdio.h>

class X {
  int x;
public:
  X(int xx) : x(xx) {}
  operator int()
  { return x; }
};

int f(X a)
{
  return a;
}

int main()
{
  printf("f(X(3) = %d\n", f(X(3)));
  return 0;
}
