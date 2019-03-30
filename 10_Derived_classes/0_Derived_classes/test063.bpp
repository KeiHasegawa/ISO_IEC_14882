#include <stdio.h>

struct V { int v; };

struct A : virtual public V { int a; };

struct B : virtual public V { int b; };

struct C : public A, public B { int c; };

int main()
{
  C c;
  c.v = 1;
  c.a = 2;
  c.b = 3;
  c.c = 4;
  printf("c.v = %d, c.a = %d, c.b = %d, c.c = %d\n", c.v, c.a, c.b, c.c);
  int V::* pmv = &V::v;
  c.*pmv = 5;
  printf("c.v = %d, c.a = %d, c.b = %d, c.c = %d\n", c.v, c.a, c.b, c.c);
  int A::* pma = &A::a;
  c.*pma = 6;
  printf("c.v = %d, c.a = %d, c.b = %d, c.c = %d\n", c.v, c.a, c.b, c.c);
  int B::* pmb = &B::b;
  c.*pmb = 7;
  printf("c.v = %d, c.a = %d, c.b = %d, c.c = %d\n", c.v, c.a, c.b, c.c);
  return 0;
}
