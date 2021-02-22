#include <stdio.h>

namespace N {
  void f()
  {
    printf("f() called\n");
  }
  void f(int n)
  {
    printf("f(int) called with %d\n", n);
  }
}

int main()
{
  using N::f;
  f();
  f(3);
  return 0;
}
