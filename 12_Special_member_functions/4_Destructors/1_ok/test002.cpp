/*
 * Note: the notation for explicit call of a destructor can be used for any
 * scalar type name (5.2.4). Allowing this makes it possible to write code
 * without having to know if a destructor exists for a given type.
 */
#include <stdio.h>

void f()
{
  typedef int I;
  I* p;
  // ...
  p->I::~I();
}

int main()
{
  printf("just ok compile test\n");
  return 0;
}
