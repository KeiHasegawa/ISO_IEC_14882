#include <stdio.h>

class M {
public:
  M()
  {
    printf("M::M(void) called\n");
  }
  M(M&)
  {
    printf("M::M(M&) called\n");
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
