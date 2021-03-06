#include <stdio.h>
#include <stdlib.h>

class Arena;

class X {
public:
  void* operator new(size_t sz)
  {
    printf("X::operator new(size_t) called\n");
    return malloc(sz);
  }
  void* operator new(size_t, Arena* p)
  {
    printf("X::operator new(size_t, Arena*) called\n");
    return p;
  }
};

class Arena {
};

Arena buf[3];

int main()
{
  X* p = new X;
  free(p);
  X* q = new(buf) X;
  return 0;
}
