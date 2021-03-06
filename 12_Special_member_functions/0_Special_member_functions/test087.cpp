#include <stdio.h>
#include <stdlib.h>

struct B {
  virtual ~B()
  {
    printf("B::~B called\n");
  }
  void* operator new(size_t sz)
  {
    printf("B::operator new called\n");
    return malloc(sz);
  }
  void operator delete(void* p)
  {
    printf("B::operator delete called\n");
    return free(p);
  }
};

struct D : B {
  ~D()
  {
    printf("D::~D called\n");
  }
  void* operator new(size_t sz)
  {
    printf("D::operator new called\n");
    return malloc(sz);
  }
};

int main()
{
  B* p = new D;
  delete p;
  return 0;
}
