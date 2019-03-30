/*
 * An elaborated-type-specifier (7.1.5.3) can also be used as a type-specifier
 * as part of a declaration. It differs from a class declaration in that if a
 * class of the elaborated name is in scope the elaborated name will refer to
 * it.
 */
#include <stdio.h>

struct s { int a; };

void g(int s)
{
  struct s* p = new struct s; // global s
  p->a = s; // local s
  printf("`g' called\n");
  printf("p->a = %d\n", p->a);
}

int main()
{
  g(5);
  return 0;
}
