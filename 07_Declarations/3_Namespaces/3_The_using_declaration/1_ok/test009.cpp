#include <stdio.h>

int f()
{
  return 123;
}

extern "C++" {
  namespace N {
    using ::f;
  }
}

namespace N {
  using N::f;
}

int main()
{
  printf("N::f() return %d\n", N::f());
  return 0;
}
