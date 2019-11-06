#include <stdio.h>

template<class T1, class T2> struct X {
  T1 mem1;
  T2 mem2;
};

template<class A, class B = X<A, double> > struct Y {
  A a;
  B b;
};

int main()
{
  Y<int> y;
  printf("y.a = %d\n", y.a = 1);
  printf("y.b.mem1 = %d\n", y.b.mem1 = 2);
  printf("y.b.mem2 = %f\n", y.b.mem2 = 3.0);
  return 0;
}
