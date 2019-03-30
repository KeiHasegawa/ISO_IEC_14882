#include <stdio.h>

class X {
public:
  X& operator=(X&)
  {
    printf("X::operator=(X&) called\n");
    return *this;
  }
};

int main()
{
  X x, y;
  printf("before assignment x = y\n");
  x = y;
  printf("after assignment x = y\n");
  return 0;
}
