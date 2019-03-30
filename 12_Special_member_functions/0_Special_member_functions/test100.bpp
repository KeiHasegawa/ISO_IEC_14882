#include <stdio.h>

struct S {
  static const S& f();
  void g()
  {
    f();
  }
};

const S& S::f()
{
  printf("S::f called\n");
  static S s;
  return s;
}

int main()
{
  S s;
  s.g();
  return 0;
}
