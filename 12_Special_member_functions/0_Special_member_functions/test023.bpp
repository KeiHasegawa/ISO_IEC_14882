#include <stdio.h>

class B {
public:
  void bf()
  {
    printf("B::bf called\n");
  }
  ~B()
  {
    printf("B::~B called\n");
  }
};

class D : public B {
public:
  void df()
  {
    printf("D::df called\n");
  }
  ~D();
};

int main()
{
  D d;
  return 0;
}

D::~D()
{
  printf("D::~D called\n");
  bf();
  df();
}
