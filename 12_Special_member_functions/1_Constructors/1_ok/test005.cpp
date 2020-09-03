#include <stdio.h>

struct S {
  int m;
  S() : m(0) { printf("S::S() called\n"); }
  S(int n) : m(n) { printf("S::S(int) called with %d\n", n); }
  operator int() const { printf("operator S::int() called\n"); return 5; }
  void f()
  {
    S x(*this);
    printf("S::f() called x.m = %d\n", x.m);
  }
};

int main()
{
  S s;
  s.f();
  S s2(10);
  s2.f();
  return 0;
}
