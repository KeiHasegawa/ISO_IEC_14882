#include <stdio.h>
#include <stdlib.h>

class Y {
  int y;
public:
  void operator delete(void* p, size_t sz)
  {
    printf("Y::operator delete called. sz = %d\n", sz);
    free(p);
  }
};

void f(Y* p)
{
  delete p;
}

int main()
{
  f(new Y);
  return 0;
}
