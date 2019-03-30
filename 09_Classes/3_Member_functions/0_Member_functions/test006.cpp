#include <stdio.h>

struct X {
  static void f()
  {
    printf("X::f called\n");
  }
};

int main()
{
  X::f();
  return 0;
}
