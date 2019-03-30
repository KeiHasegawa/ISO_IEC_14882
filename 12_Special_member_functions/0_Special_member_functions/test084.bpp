#include <stdio.h>

class X {
public:
  ~X()
  {
    printf("X::~X called\n");
  }
};

void f(X* p)
{
  delete p;
}

int main()
{
  f(new X);
  return 0;
}
