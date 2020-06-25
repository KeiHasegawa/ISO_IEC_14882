#include <stdio.h>

template<class X> struct A {
  typedef typename X::I I;
};

template<class Y> struct A<Y*> {
  typedef int I;
};

template<class Z> struct B {
  Z z;
};

template<class W> struct D : public B<typename A<W>::I> {};

int main()
{
  D<char*> d;
  printf("d.z = 0x%x\n", d.z = 0x12345678);
  return 0;
}
