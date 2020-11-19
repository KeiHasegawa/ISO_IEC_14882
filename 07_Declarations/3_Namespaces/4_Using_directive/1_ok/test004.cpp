#include <stdio.h>

namespace N {
  void f()
  {
    printf("N::f() called\n");
  }
}

int main()
{
  using namespace N;
  f();
  return 0;
}
