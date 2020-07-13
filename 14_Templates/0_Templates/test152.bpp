#include <stdio.h>

struct S {
  void f();
  template<class C> static void f(C);
};

void S::f()
{
  printf("`S::f()' is called\n");
}

template<> void S::f(int a)
{
  printf("`S::f(int)' is called with %d\n", a);
}

template<> void S::f(double a)
{
  printf("`S::f(double)' is called with %f\n", a);
}

int main()
{
  S s;
  s.f();
  s.f(2);
  S::f(0.5);
  return 0;
}
