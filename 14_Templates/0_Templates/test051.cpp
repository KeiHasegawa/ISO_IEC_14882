#include <stdio.h>

template<class T1, class T2> struct X {
  T1 mem1;
  T2 mem2;
};

template<class A, class B = X<double, A> > struct Y {
  A a;
  B b;
};

int main()
{
  Y<int> y;
  printf("y.a = %d\n", y.a = 1);
  printf("y.b.mem1 = %f\n", y.b.mem1 = 2.0);
  printf("y.b.mem2 = %d\n", y.b.mem2 = 3);
  return 0;
}
