#include <stdio.h>

class X {
  int x;
public:
  X(int xx) : x(xx) {}
  operator int()
  {
    printf("X::operator int called\n");
    return x;
  }
};

class Y {
  int y;
public:
  Y(int yy) : y(yy) {}
  operator X()
  {
    printf("Y::operator X called\n");
    return X(y);
  }
};

int main()
{
  Y a(3);
  int b = X(a);
  printf("b = %d\n", b);
  return 0;
}
