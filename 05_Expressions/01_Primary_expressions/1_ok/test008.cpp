#include <stdio.h>

struct S {
  int a;
  int b;
};

int main()
{
  S s;
  s = {};
  printf("s.a = %d, s.b = %d\n", s.a, s.b);
  return 0;
}
