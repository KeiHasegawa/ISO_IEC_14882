/*
 * Declaration of pointer to tag which is not complete type.
 */

#include <stdio.h>

struct X;                   // declare X as a struct type
struct X* x1;               // use X in pointer formation
X* x2;                      // use X in pointer formation

struct X {
  int a;
};

void test000()
{
  printf("`test000' called\n");
  printf("x1->a = %d\n", x1->a);
  printf("x2->a = %d\n", x2->a);
}

int main()
{
  struct X a = { 1 };
  x1 = &a;
  X b = { 2 };
  x2 = &b;
  test000();
  return 0;
}
