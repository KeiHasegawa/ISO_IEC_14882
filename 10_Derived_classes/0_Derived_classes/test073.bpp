/*
 * overwrite a virtual function which overwrite another virtual function.
 */
#include <stdio.h>

struct A {
  virtual void vf()
  {
    printf("A::vf() called\n");
  }
};

struct B : A {
  virtual void vf()
  {
    printf("B::vf() called\n");
  }
};

struct C : B {
  void vf()
  {
    printf("C::vf() called\n");
  }
};

void f(A* pa)
{
  printf("f(A*) called\n");
  pa->vf();
}

void g(B* pb)
{
  printf("g(B*) called\n");
  pb->vf();
}

int main()
{
  A a;
  B b;
  C c;
  f(&a);
  f(&b);
  f(&c);
  g(&b);
  g(&c);
  return 0;
}
