#include <stdio.h>

class X;

class Y {
public:
  void f()
  {
    X* p;
  }
};

int main()
{
  printf("just ok compile test\n");
  return 0;
}
