#include <stdio.h>

class X {
public:
  int b;
};

class Y : public X {
public:
  int c;
};

int main()
{
  X x;
  Y y;
  y.b = 1;
  y.c = 2;
  x = y;
  printf("x.b = %d, y.b = %d, y.c = %d\n", x.b, y.b, y.c);
  return 0;
}
