#include <stdio.h>

struct A { int a; };
struct B { int b; };
struct C { int c; };
struct D : public A, public B, public C { int d; };

int main()
{
  D x;
  x.a = 1;
  x.b = 2;
  x.c = 3;
  x.d = 4;
  printf("x.a = %d x.b = %d x.c = %d x.d = %d\n",
	 x.a, x.b, x.c, x.d);
  return 0;
}
