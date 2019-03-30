#include <stdio.h>

struct T {
  int g()
  {
    printf("T::g() called\n");
    return 5;
  }
};

template<class C> struct S {
  template<class C2> void f(C2 c2)
  {
    printf("S::f(C2) called\n");
    printf("c2 = %d\n", c2);
  }
  void f(T t){ f(t.g()); }
  void f(C* p)
  {
    printf("s::f(C*) called\n");
    printf("*p = %d\n", *p); 
  }
};

int main()
{
  S<int> x;
  int n = 6;
  x.f(&n);
  T t;
  x.f(t);
  return 0;
}
