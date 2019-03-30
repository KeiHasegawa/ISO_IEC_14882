/*
 * A namespace member has the same name with namespace name.
 */
#include <stdio.h>

namespace N {
  int N;
}

int main()
{
  printf("N::N = %d\n", N::N = 3);
  return 0;
}
