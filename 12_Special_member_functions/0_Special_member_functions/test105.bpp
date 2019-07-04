#include <stdio.h>

struct V {
  V()
  {
    printf("V::V() called\n");
  }
  V(int v)
  {
    printf("V::V(int) called with %d\n", v);
  }
  ~V()
  {
    printf("V::~V() called\n\n");
  }
};

struct A : virtual V {
  A(int a) : V(a-1)
  {
    printf("A::A(int) called with %d\n", a);
  }
  ~A()
  {
    printf("A::~A() called\n");
  }
};

struct B : virtual V {
  B(int b) : V(b-1)
  {
    printf("B::B(int) called with %d\n", b);
  }
  ~B()
  {
    printf("B::~B() called\n");
  }
};

struct C : A, B {
  C(int c) : A(c-2), B(c-1)
  {
    printf("C::C(int) called with %d\n", c);
  }
  ~C()
  {
    printf("C::~C() called\n");
  }
};

int main()
{
  V v(0);
  printf("\n");
  A a(2);
  printf("\n");
  B b(4);
  printf("\n");
  C c(7);
  printf("\n");
  return 0;
}
