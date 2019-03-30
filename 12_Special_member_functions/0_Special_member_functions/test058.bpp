#include <stdio.h>

class M {
public:
  M()
  {
    printf("M::M(void) called\n");
  }
  M(const M&)
  {
    printf("M::M(const M&) called\n");
  }
};

class X {
  M m;
};

int main()
{
  X x;
  printf("before initialize y\n");
  X y = x;
  printf("after initialize y\n");
  return 0;
}

