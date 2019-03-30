#include <stdio.h>

namespace N {
  int f(int a){ return a; }
}

int main()
{
  int a = 1234;
  printf("N::f(%d) return value : %d\n", a, N::f(a));
  return 0;
}
