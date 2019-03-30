#include <stdio.h>

struct X {
  int a;
  void f()
  {
    printf("a = %d\n",a);
  }
};

int main()
{
  X x;
  x.a = 1234;
  x.f();
  return 0;
}
