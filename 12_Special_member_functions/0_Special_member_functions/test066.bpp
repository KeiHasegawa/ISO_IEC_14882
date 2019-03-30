#include <stdio.h>

class M {
public:
  M& operator=(M&)
  {
    printf("M::operator= called\n");
    return *this;
  }
};

class X {
  M m;
};

int main()
{
  X x, y;
  printf("before assignment x = y\n");
  x = y;
  printf("after assignment x = y\n");
  return 0;
}
