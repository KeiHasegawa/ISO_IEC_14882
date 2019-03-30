#include <stdio.h>

struct X {
  int mem;
  operator int() const { return mem; }
};

int main()
{
  X x;
  x.mem = 3;
  int n = x;
  printf("n = %d\n",n);
  return 0;
}
