#include <stdio.h>

class X {
public:
  X()
  {
    printf("X::X(void) called\n");
  }
  X(const X&)
  {
    printf("X::X(const X&) called\n");
  }
};

X a;
X b = a;

int main()
{
  printf("main called\n");
  return 0;
}
