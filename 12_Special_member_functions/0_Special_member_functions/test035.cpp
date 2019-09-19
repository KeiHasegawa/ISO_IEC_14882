#include <stdio.h>
#include <stdlib.h>

class X {
public:
  static void operator delete(void* p)
  {
    printf("X::operator delete called\n");
    free(p);
  }
};

class Y {
  int y;
public:
  static void operator delete(void* p, size_t sz)
  {
    printf("Y::operator delete called. sz = %d\n", (int)sz);
    free(p);
  }
};

void f(X* p, Y* q)
{
  delete p;
  delete q;
}

int main()
{
  f(new X, new Y);
  return 0;
}
