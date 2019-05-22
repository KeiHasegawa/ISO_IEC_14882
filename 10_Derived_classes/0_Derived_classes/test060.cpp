#include <stdio.h>

struct T1 { int x; };

struct A : virtual public T1 { int a; };
struct B : virtual public T1 { int b; };

struct T2 : public A, public B { int y; };

void f()
{
  T1 t1;
  t1.x = 1;
  T2 t2;
  t2.x = 2;
  t2.a = 3;
  t2.b = 4;
  t2.y = 5;
  printf("t1.x = %d, t2.x = %d, t2.a = %d, t2.b = %d, t2.y = %d\n",
	 t1.x, t2.x, t2.a, t2.b, t2.y);
  t1 = t2;
  printf("t1.x = %d, t2.x = %d, t2.a = %d, t2.b = %d, t2.y = %d\n",
	 t1.x, t2.x, t2.a, t2.b, t2.y);
}

void g()
{
  T2 t2;
  t2.x = -2;
  t2.a = -3;
  t2.b = -4;
  t2.y = -5;
  printf("t2.x = %d, t2.a = %d, t2.b = %d, t2.y = %d\n",
	 t2.x, t2.a, t2.b, t2.y);
  A a = t2;
  B b = t2;
  printf("a.x = %d, a.a = %d\n", a.x, a.a);
  printf("b.x = %d, b.b = %d\n", b.x, b.b);
}

int main()
{
  f();
  g();
  return 0;
}
