#include <stdio.h>

class B {
public:
  B()
  {
    printf("B::B(void) called\n");
  }
  B(B&)
  {
    printf("B::B(B&) called\n");
  }
};

class D : public B {
};

int main()
{
  D x;
  printf("before initialize y\n");
  D y = x;
  printf("after initialize y\n");
  return 0;
}
