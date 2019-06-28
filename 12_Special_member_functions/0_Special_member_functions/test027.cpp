#include <stdio.h>

class X {
public:
  X(){}
  virtual ~X(){}
  X& operator~()
  {
    printf("X::operator ~ called\n");
    return *this;
  }
  void f();
};

void X::f()
{
  printf("X::f called\n");
  X aa = X();
  ~aa;
  printf("before aa.~X() call\n");
  aa.~X();
  printf("after aa.~X() call\n");
  printf("before this->~X() call\n");
  this->~X();
  printf("after this->~X() call\n");
  ~X();
}

class Y : public X {
public:
  ~Y()
  {
    printf("Y::~Y called\n");
  }
};

int main()
{
  X x;
  x.f();
  Y y;
  y.f();
  printf("before return from main\n");
  return 0;
}
