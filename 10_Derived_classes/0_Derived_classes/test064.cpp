#include <stdio.h>

struct V { int v; };

struct A : public V { int a; };

struct B : public V { int b; };

struct C : public A, public B { int c; };

int main()
{
  C c;
  c.A::v = 1;
  c.a = 2;
  c.B::v = 3;
  c.b = 4;
  c.c = 5;
  printf("c.A::v = %d, c.a = %d, c.B::v = %d, c.b = %d, c.c = %d\n",
	 c.A::v, c.a, c.B::v, c.b, c.c);
  int A::* pma = &A::a;
  c.*pma = 6;
  printf("c.A::v = %d, c.a = %d, c.B::v = %d, c.b = %d, c.c = %d\n",
	 c.A::v, c.a, c.B::v, c.b, c.c);
  int B::* pmb = &B::b;
  c.*pmb = 7;
  printf("c.A::v = %d, c.a = %d, c.B::v = %d, c.b = %d, c.c = %d\n",
	 c.A::v, c.a, c.B::v, c.b, c.c);
  return 0; 
}
