/*
 * Check enumeration declaration works well.
 */
#include <stdio.h>

enum { a, b, c=0 };
enum { d, e, f=e+2 };

int main()
{
  printf("a = %d\n", a);
  printf("b = %d\n", b);
  printf("c = %d\n", c);
  printf("d = %d\n", d);
  printf("e = %d\n", e);
  printf("f = %d\n", f);
  return 0;
}
