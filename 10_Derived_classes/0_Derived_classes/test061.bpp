#include <stdio.h>

struct T1 { int x; };

struct A : public T1 { int a; };
struct B : public T1 { int b; };

struct T2 : public A, public B { int y; };

int main()
{
  T2 t2;
  t2.A::x = 1;
  t2.a = 2;
  t2.B::x = 3;
  t2.b = 4;
  t2.y = 5;
  printf("t2.A::x = %d, t2.a = %d, t2.B::x = %d, t2.b = %d, t2.y = %d\n",
	 t2.A::x, t2.a, t2.B::x, t2.b, t2.y);
  A a = t2;
  printf("a.x = %d, a.a = %d\n", a.x, a.a);
  B b = t2;
  printf("b.x = %d, b.b = %d\n", b.x, b.b);
  return 0;
}
