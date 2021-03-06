/*
 * Any deallocation function for a class X is a static member (even if not
 * explicitly declared static).
 */
#include <stdio.h>

class X {
public:
  void operator delete(void*);
  void operator delete[](void*, size_t);
};

class Y {
public:
  void operator delete(void*, size_t);
  void operator delete[](void*);
};

int main()
{
  X* a = new X;
  delete a;
  X* b = new X[5];
  delete[] b;
  Y* c = new Y;
  delete c;
  Y* d = new Y[6];
  delete[] d;
  return 0;
}

void X::operator delete(void*)
{
  printf("`X::operator delete(void*)' called\n");
}

void X::operator delete[](void*, size_t)
{
  printf("`X::operator delete[](void*, size_t)' called\n");
}

void Y::operator delete(void*, size_t)
{
  printf("`Y::operator delete(void*, size_t)' called\n");
}

void Y::operator delete[](void*)
{
  printf("`Y::operator delete[](void*)' called\n");
}
