#include <stdio.h>

struct S {
  void* p;
  S() : p(0) {}
};

int main()
{
  S s;
  printf("s.p = %x\n", (int)s.p);
  return 0;
}
