#include <stdio.h>

template<class A, class B = int> struct X;

template<class A, class B> struct X {
  A a;
  B b;
};

int main()
{
  X<double> x;
  x.a = 1.5;
  x.b = 2;
  printf("x.a = %f, x.b = %d\n", x.a, x.b);
  return 0;
}
