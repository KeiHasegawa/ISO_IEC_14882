#include <stdio.h>

template<class A> struct outer {
  A a;
  template<class B> struct inner {
    B b;
  };
};

int main()
{
  outer<int> x;
  printf("x.a = 0x%x\n", x.a = 0x12345678);
  outer<int>::inner<double> y;
  printf("y.b = %f\n", y.b = -3.25);
  return 0;
}
