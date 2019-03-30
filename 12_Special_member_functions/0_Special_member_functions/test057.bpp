#include <stdio.h>

class X {
public:
  X()
  {
    printf("X::X(void) called\n");
  }
  X(X&)
  {
    printf("X::X(X&) called\n");
  }
};

int main()
{
  X x;
  printf("before initialize of y\n");
  X y = x;
  printf("after initialize of y\n");
  return 0;
}
