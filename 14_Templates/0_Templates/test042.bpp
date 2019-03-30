#include <stdio.h>

template<class T> struct X {
  T t;
};

template<class A, class B> struct Y;

template<class A, class B> struct X< Y<A,B> > {
  A a;
  B b;
};

int main()
{
  X<int> x1;
  x1.t = -2;
  printf("x1.t = %d\n", x1.t);
  X< Y<float,char> > x2;
  x2.a = 1.5;
  x2.b = 'b';
  printf("x2.a = %f, x2.b = '%c'\n", x2.a, x2.b);
  return 0;
}
