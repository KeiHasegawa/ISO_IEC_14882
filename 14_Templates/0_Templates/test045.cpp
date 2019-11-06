#include <stdio.h>

template<class T> struct A {
  T a;
};

template<class T> struct B {
  T b;
};

template<class T> struct D : public B< A<T> > {
};

int main()
{
  D<int> di;
  printf("di.b.a = %d\n", di.b.a = 1);
  return 0;
}
