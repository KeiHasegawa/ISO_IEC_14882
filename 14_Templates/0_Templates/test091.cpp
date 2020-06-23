#include <stdio.h>

struct S1 {
  template<class C> void f(C c)
  {
    printf("S1::f called\n");
    printf("c = %d\n", c);
  }
};

struct S2 {
  template<class C> void f(C c)
  {
    printf("S2::f called\n");
    printf("c = %f\n", c);
  }
};

int main()
{
  S1 s1;
  int a = 1;
  s1.f(a);
  S2 s2;
  double b = 1.5;
  s2.f(b);
  return 0;
}
