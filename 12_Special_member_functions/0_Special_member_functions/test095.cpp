#include <stdio.h>

struct X {
  void f();
};

struct Y {
  X& x;
  Y(X& xx) : x(xx)
  {
    x.f();
  }
};

void X::f()
{
  printf("X::f called\n");
}

int main()
{
  X x;
  Y y(x);
  return 0;
}
