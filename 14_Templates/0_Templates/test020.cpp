#include <stdio.h>

class X {
public:
  int mem;
};

X xx;

class Y {
public:
  class X& f()
  {
    return xx;
  }
};

int main()
{
  X x;
  x.mem = 1234;
  xx.mem = 5678;

  printf("x.mem = %d\n", x.mem);
  printf("xx.mem = %d\n", xx.mem);

  Y y;
  x = y.f();

  printf("x.mem = %d\n", x.mem);
  printf("xx.mem = %d\n", xx.mem);

  return 0;
}
