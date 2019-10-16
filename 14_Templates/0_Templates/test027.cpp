#include <stdio.h>

template<class T> class X {
public:
  T mem;
};

template<class A, class B = X<A> > class Y {
public:
  A a;
  B b;
};

int main()
{
  Y<int> y;
  y.a = -1;
  y.b.mem = 1;
  printf("y.a = %d, y.b.mem = %d\n", y.a, y.b.mem);

  return 0;
}
