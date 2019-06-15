#include <stdio.h>

class B {
public:
  B()
  {
    printf("B::B called\n");
  }
  ~B()
  {
    printf("B::~B called\n");
  }
};

class D : public B {
public:
  D()
  {
    printf("D::D called\n");
  }
  ~D()
  {
    printf("D::~D called\n");
  }
};

int main()
{
  D d;
  return 0;
}
