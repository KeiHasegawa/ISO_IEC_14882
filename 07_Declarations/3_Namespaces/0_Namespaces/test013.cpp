#include <stdio.h>

namespace N {
  typedef int INT;
}

void f(N::INT n)
{
  printf("n = %d\n", n);
}

int main()
{
  f(4567);
  return 0;
}
