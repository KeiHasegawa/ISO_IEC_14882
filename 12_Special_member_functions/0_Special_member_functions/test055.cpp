#include <stdio.h>

class X {
public:
  virtual void f()
  {
    printf("X::f called\n");
  }
  X(){ f(); }
  ~X(){ f(); }
};

class Y : public X {
public:
  void f()
  {
    printf("X::f called\n");
  }
};

int main()
{
  X x;
  Y y;
  return 0;
}
