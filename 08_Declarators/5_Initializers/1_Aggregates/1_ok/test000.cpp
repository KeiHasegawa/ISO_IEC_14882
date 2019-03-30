/*
 * initializer for structure works well.
 */
#include <stdio.h>

struct A {
  int x;
  struct B {
    int i;
    int j;
  } b;
} a = { 1, { 2, 3 } };

int main()
{
  printf("a.x = %d, a.b.i = %d, a.b.j = %d\n",
	 a.x, a.b.i, a.b.j);
  return 0;
}
