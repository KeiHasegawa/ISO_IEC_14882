#include <stdio.h>

template<class A, class B = char> struct S {
  A a;
  B b;
};

template<class A> struct S<A, int>  {
  const A* pa;
};

template<> struct S<int> {
  double m;
};

int main()
{
  S<int> si;
  si.m = 1.0;
  S<char, int> sci;
  sci.pa = "abcdefg";
  S<int, char> sic;
  sic.a = 2;
  sic.b = '3';
  S<int, float> sif;
  sif.a = 4;
  sif.b = 5.0;
  printf("%d %s %d %c %d %f\n", si.m, sci.pa, sic.a, sic.b, sif.a, sif.b);
  return 0;
}
