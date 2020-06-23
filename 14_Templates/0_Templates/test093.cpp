#include <stdio.h>

template<class C> void f(C c)
{
  printf("::f called\n");
  printf("c = %d\n", c);
}

struct S {
  template<class C> static void f(C c)
  {
    printf("S::f called\n");
    printf("c = %f\n", c);
  }
};

int main()
{
  int a = 1;
  f(a);
  double b = 1.5;
  S::f(b);
  return 0;
}
