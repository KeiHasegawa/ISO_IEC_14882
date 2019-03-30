/*
 * initialized zero if not initializer presented.
 */
#include <stdio.h>

struct S { int a; char* b; int c; };
S ss = { 1, "asdf" };

int main()
{
  printf("ss.a = %d, ss.b = \"%s\", ss.c = %d\n",
	 ss.a, ss.b, ss.c);
  S ss = { 1, "asdf" };
  printf("ss.a = %d, ss.b = \"%s\", ss.c = %d\n",
	 ss.a, ss.b, ss.c);
  return 0;
}
