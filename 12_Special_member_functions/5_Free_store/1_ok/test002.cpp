/*
 * Since member allocation and deallocation functions are static they cannot
 * be virtual. Note: however, when the cast-expression of a delete-expression
 * refers to an object of class type, because the deallocation function
 * actually called is looked up in the scope of the class that is the dynamic
 * type of the object, if the destructor is virtual, the effect is the same.
 */
#include <stdio.h>

struct B {
  virtual ~B();
  void operator delete(void*, size_t);
};
struct D : B {
  void operator delete(void*);
};
void f()
{
  B* bp = new D;
  delete bp; //1: uses D::operator delete(void*)
}

int main()
{
  f();
  return 0;
}

B::~B()
{
  printf("`B::~B()' called\n");
}

void B::operator delete(void*, size_t)
{
  printf("`B::operator delete(void*, size_t)' called\n");
}

void D::operator delete(void*)
{
  printf("`D::operator delete(void*)' called\n");
}
