/*
 * Check integral promotion of enumeration works well.
 */
#include <stdio.h>

void f()
{
  enum color { red, yellow, green=20, blue };
  color col = red;
  color* cp = &col;
  if (*cp == blue)
    printf("error\n");
  else
    printf("ok\n");
}

int main()
{
  f();
  return 0;
}
