#include <stdio.h>

class X {
public:
  virtual ~X()
  {
    printf("X::~X called\n");
  }
};

class Y : public X {
public:
  ~Y()
  {
    printf("Y::~Y called\n");
  }
};

void f(X* px)
{
  delete px;
}

int main()
{
  f(new X);
  f(new Y);
  return 0;
}
