#include <stdio.h>
#include <stdlib.h>

class X {
public:
  ~X()
  {
    printf("X::~X called\n");
  }
  void operator delete(void* p)
  {
    printf("X::operator delete called\n");
    free(p);
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
