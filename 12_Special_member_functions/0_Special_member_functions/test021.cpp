#include <stdio.h>

class X {
  int x;
  static int cnt;
public:
  X() : x(cnt++) {}
  ~X()
  {
    printf("X::~X called. x = %d\n", x);
  }
};

int X::cnt;

int main()
{
  X array[5];
  return 0;
}
