#include <stdio.h>

struct V { int v; };
struct A : virtual public V { int a; };
struct B : virtual public V { int b; };
struct C : public A, public B { int c; };

int main()
{
  C x;
  x.v = 1;
  x.a = 2;
  x.b = 3;
  x.c = 4;
  printf("x.v = %d x.a = %d x.b = %d x.c = %d\n",
	 x.v, x.a, x.b, x.c);
  return 0;
}
