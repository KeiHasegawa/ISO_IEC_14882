#include <stdio.h>

template<class X> struct A;

template<class U, class V = A<U> > struct B;

typedef B<char> C;

template<class X> struct A {
  A()
  {
    printf("A::A() called\n");
  }
  A(const A&)
  {
    printf("A::A(const A&) called\n");
  }
};

template<class U, class V> struct B {
  V vm;
};

int main()
{
  C c;
  A<char> x = c.vm;
  return 0;
}
