#include <stdio.h>

struct V {
  int v;
  V();
  V(const V&);
};

struct A : virtual V {
  int a;
};

struct B : virtual V {
  int b;
};

struct C : A, B {
};

int main()
{
  C x;
  x.a = 1;
  x.b = 2;
  C y = x;
  printf("y.v = %d y.a = %d y.b = %d\n", y.v, y.a, y.b);
  return 0;
}

V::V() : v(100)
{
  printf("V::V() called\n");
}

V::V(const V& src)
{
  v = src.v + 50;
  printf("V::V(const V&) called\n");
}
