#include <stdio.h>

struct L { int l; };
struct A : public L { int a; };
struct B : public L { int b; };
struct C : public A, public B { int c; void f(); };

void C::f()
{
  A::l = 1;
  a = 2;
  B::l = 3;
  b = 4;
  c = 5;
  printf("A::l = %d a = %d B::l = %d b = %d c = %d\n",
	 A::l, a, B::l, b, c);
}

int main()
{
  C x;
  x.f();
  return 0;
}
