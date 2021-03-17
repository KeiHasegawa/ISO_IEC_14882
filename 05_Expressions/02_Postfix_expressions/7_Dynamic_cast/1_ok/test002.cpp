#include <stdio.h>

struct X {
  virtual void vf()
  {
    printf("`X::vf' called\n");
  }
};

struct Y {
  virtual ~Y(){}
};

void f(Y* py)
{
  auto px = dynamic_cast<X*>(py);
  px->vf();
}

struct Z : X, Y {};

int main()
{
  Z z;
  f(&z);
  return 0;
}
