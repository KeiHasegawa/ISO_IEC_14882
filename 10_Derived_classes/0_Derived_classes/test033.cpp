#include <stdio.h>

class X {
public:
  virtual void f() = 0;
  virtual int g() = 0;
};

void f(X* p)
{
  p->f();
  printf("p->g() return value : %d\n", p->g());
}

struct Y : public X {
  int y;
  int g()
  {
    printf("Y::g called\n");
    return y;
  }
};

struct Y1 : public Y {
  void f()
  {
    printf("Y1::f called\n");
  }
};

int main()
{
  Y1 obj;
  obj.y = 1234;
  f(&obj);
  return 0;
}
