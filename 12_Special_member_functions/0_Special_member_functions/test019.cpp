#include <stdio.h>

class X {
public:
  ~X()
  {
    printf("X::~X called\n");
  }
};

struct Y {
  X x;
};

int main()
{
  Y y;
  return 0;
}
