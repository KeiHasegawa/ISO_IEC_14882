#include <stdio.h>

struct S {
  template<class C> void f(C);
  template<class C> void f(C, C);
};

template<class C> void S::f(C a)
{
  printf("S::f(C) is called with %d\n", a);
}

template<class C> void S::f(C a, C b)
{
  printf("S::f(C) is called with (%d, %d)\n", a, b);
}

int main()
{
  S s;
  s.f(2, 3);
  return 0;
}
