#include <stdio.h>

struct A { int a; A(); };
struct B: public virtual A { int b; };
struct C: public A, public B { C(); int c; };

int main()
{
  C c;
  printf("c.b = %d c.c = %d\n", c.b, c.c);
  return 0;
}

A::A()
{
  a = 1;
  printf("`A::A()' called\n");
}

C::C()
{
  b = 2;
  c = 3;
}
