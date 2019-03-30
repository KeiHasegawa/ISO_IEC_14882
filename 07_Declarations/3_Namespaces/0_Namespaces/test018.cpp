#include <stdio.h>

struct S {
  typedef int T;
};

struct S2 {
  S::T mem;
};

int main()
{
  S2 s2;
  printf("s2.mem = %d\n", s2.mem = 123);
  return 0;
}
