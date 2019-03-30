#include <stdio.h>

class X {
public:
  ~X()
  {
    printf("X::~X called\n");
  }
};

class Y : public X {
};

int main()
{
  Y y;
  return 0;
}
