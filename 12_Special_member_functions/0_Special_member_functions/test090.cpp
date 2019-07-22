#include <stdio.h>

class X {
public:
  operator int()
  {
    printf("X::operator int() called\n");
    return 456;
  }
};

class Y : public X {};

void f(Y y)
{
  float f = y;
  printf("f = %f\n", f);
}

int main()
{
  Y y;
  f(y);
  return 0;
}
