#include <stdio.h>

template<class T1, class T2> struct X {
  T1 mem1;
  T2 mem2;
};

template<class A, class B, class C = X<A, B> > struct Y {
  A a;
  B b;
  C c;
};

int main()
{
  Y<int, double> y;
  printf("y.a = %d\n", y.a = 1);
  printf("y.b = %f\n", y.b = 2.0);
  printf("y.c.mem1 = %d\n", y.c.mem1 = 3);
  printf("y.c.mem2 = %f\n", y.c.mem2 = 4.0);
  return 0;
}
