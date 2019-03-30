#include <stdio.h>

struct X {
  void f()
  {
    printf("X::f called\n");
  }
};

int main()
{
  X x;
  x.f();
  return 0;
}
