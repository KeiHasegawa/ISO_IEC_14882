#include <stdio.h>

struct V {
  V();
};

struct A : virtual V {
  A();
  A(int);
};

struct B : virtual V {
  B();
  B(int);
};

struct C : A, B {
  C(int x) : A(x), B(x) {}
};

int main()
{
  C c(5);
  return 0;
}

V::V()
{
  printf("`V::V()' called\n");
}

A::A(int x)
{
  printf("`A::A(int)' called with %d\n", x);
}

B::B(int x)
{
  printf("`B::B(int)' called with %d\n", x);
}
