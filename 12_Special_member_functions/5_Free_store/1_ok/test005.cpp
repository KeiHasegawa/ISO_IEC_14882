#include <stdio.h>

struct B {
  void operator delete(void*)
  {
    printf("B::delete(void*) called\n");
  }
  void operator delete(void*, size_t)
  {
    printf("B::delete(void*, size_t) called\n");
  }
  virtual ~B()
  {
    printf("~B::B() called\n");
  }
};

void f(B* pb)
{
  printf("`f' called\n");
  delete pb;
}

struct D : B {
  ~D()
  {
    printf("~D::D() called\n");
  }
};

int main()
{
  f(new B);
  f(new D);
  return 0;
}
