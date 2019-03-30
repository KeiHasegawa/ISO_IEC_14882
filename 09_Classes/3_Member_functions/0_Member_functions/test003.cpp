#include <stdio.h>

struct X {
  void f();
};

int main()
{
  X x;
  x.f();
  return 0;
}

void X::f()
{
  printf("X::f called\n");
}
