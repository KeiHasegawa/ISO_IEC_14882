#include <stdio.h>

struct A { int a; };
struct B : public A { int b; };
struct C : public B , public A { int c; };

int main()
{
  C c;
  c.b = 1;
  c.B::a = 2;
  c.c = 3;
  printf("c.b = %d, c.B::a = %d, c.c = %d\n",
	 c.b, c.B::a, c.c);
  return 0;
}
