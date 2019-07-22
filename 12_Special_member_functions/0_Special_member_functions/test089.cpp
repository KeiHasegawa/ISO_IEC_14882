#include <stdio.h>

class Y {
public:
  operator int()
  {
    printf("Y::operator int() called\n");
    return 123;
  }
};

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
