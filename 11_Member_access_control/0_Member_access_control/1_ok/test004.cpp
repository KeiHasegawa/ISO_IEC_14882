#include <stdio.h>

namespace N {
  void f();
}

class C {
  int m;
  friend void N::f();
};

int main()
{
  N::f();
  return 0;
}

void N::f()
{
  C c;
  printf("%d\n", c.m = 123);
}
