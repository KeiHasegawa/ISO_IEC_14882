#include <stdio.h>

void f()
{
  printf("`f()' is called\n");
}

template<class C> void f(C);

struct S {
  int m;
};

template<> void f(int a)
{
  printf("`f(int)' is called with %d\n", a);
}

template<> void f(double a)
{
  printf("`f(double)' is called with %f\n", a);
}

template<> void f(S a)
{
  printf("`f(S)' is called with a.m = %d\n", a.m);
}

int main()
{
  f();
  f(1);
  f(2.5);
  struct S s = { 5 };
  f(s);
  return 0;
}
