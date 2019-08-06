/*
 * Note: virtual destructors have no effect on the deallocation function
 * actually called when the cast-expression of a delete-expression refers to
 * an array of objects of class type.
 */
#include <stdio.h>

typedef unsigned int size_t;
struct B {
  virtual ~B();
  void operator delete[](void*, size_t);
};
struct D : B {
  void operator delete[](void*, size_t);
};
void f(int i)
{
  D* dp = new D[i];
  delete [] dp; // uses D::operator delete[](void*, size_t)
}

int main()
{
  f(5);
  return 0;
}

B::~B()
{
  printf("`B::~B()' called\n");
}

void B::operator delete[](void*, size_t)
{
  printf("`B::operator delete[](void*, size_t)' called\n");
}

void D::operator delete[](void*, size_t)
{
  printf("`D::operator delete[](void*, size_t)' called\n");
}
