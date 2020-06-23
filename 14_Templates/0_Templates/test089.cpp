#include <stdio.h>

template<class A> struct S;

template<class B> struct S {
  typedef double A;
  A a;
  B b;
};

int main()
{
  S<int> si;
  printf("si.a = %f\n", si.a = 1.0);
  printf("si.b = %d\n", si.b = 2);
  return 0;
}
