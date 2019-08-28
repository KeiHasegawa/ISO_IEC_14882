#include <stdio.h>

template<class C> struct S {
  int m;
  C c;
  void f()
  {
    A x = g() + m;
    printf("x = %f\n", x);
  }
  typedef float A;
  A g(C c){ return c; }
};

int main()
{
  S<float> s;
  s.m = 1;
  s.c = 2.5;
  // s.f();
  s.g(-1.25);
  printf("just compile test\n");
  return 0;
}
