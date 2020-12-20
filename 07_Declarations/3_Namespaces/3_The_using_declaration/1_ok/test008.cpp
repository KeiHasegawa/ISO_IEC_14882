#include <stdio.h>

struct S {
  int m;
};

namespace N {
  using ::S;
}

int main()
{
  N::S ns;
  ns.m = 1;
  printf("ns.m = %d\n", ns.m);
  return 0;
}
