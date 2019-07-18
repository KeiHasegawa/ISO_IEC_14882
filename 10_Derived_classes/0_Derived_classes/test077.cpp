#include <stdio.h>

struct V {
  int a;
  void f();
};

struct A : virtual V {
};

struct B : virtual V {
};

struct C : A, B  {
};

int main()
{
  C c;
  c.a = 123;
  c.f();
  return 0;
}


void V::f()
{
  printf("V::f() called. a = %d\n", a);
}
