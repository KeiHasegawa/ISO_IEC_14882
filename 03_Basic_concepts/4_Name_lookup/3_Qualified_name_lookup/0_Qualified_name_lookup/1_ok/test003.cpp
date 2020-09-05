#include <stdio.h>

struct S1 {
  enum E1 { x = 123 };
};

struct S2 {
  enum E2 { x = S1::x + 1 };
};

int main()
{
  printf("%d %d\n", S1::x, S2::x);
  return 0;
}
