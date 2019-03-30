#include <stdio.h>

class X {
public:
  virtual void f();
};

class Y : public X {
public:
  void f(short);
};

void g(Y* p)
{
  p->f(1);
  p->X::f();
}

int main()
{
  Y y;
  g(&y);
  return 0;
}

void X::f()
{
  printf("X::f called\n");
}

void Y::f(short a)
{
  printf("Y::f called with %d\n", a);
}
