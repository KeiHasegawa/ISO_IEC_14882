/*
 * Members of a namespace can be defined within that namespace.
 */
#include <stdio.h>

namespace X {
  void f() { printf("`X::f' called\n"); }
}

int main()
{
  X::f();
  return 0;
}
