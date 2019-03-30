#include <stdio.h>

namespace N {
  extern int a;
  int N::a;
}

int main()
{
  printf("N::a = %d\n", N::a = 5678);
  return 0;
}
