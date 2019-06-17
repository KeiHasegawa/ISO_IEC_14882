#include <stdio.h>

class X {
  int mem;
public:
  X() : mem(1234)
  {
    printf("X::X called, mem = %d\n",mem);
  }
};

void* operator new(size_t sz, void* p)
{
  printf("operator new called\n");
  return p;
}

X* makeX(void* p = 0)
{
  if (p)
    return new(p) X();
  else
    return new X();
}

int main()
{
  X* ret = makeX();
  delete ret;
  X* (*p)(void*) = &makeX;
  X x;
  p(&x);
  return 0;
}
