/*
 * If the class definition does not explicitly declare a copy constructor, one
 * is declared implicitly. Thus, for the class definition
 */
#include <stdio.h>

struct X {
  X(const X&, int);
};

void f(const X& a)
{
  X b = a;
}

/*
 * a copy constructor is implicitly-declared. If the user-declared constructor
 * is later defined as
 */
X::X(const X& x, int i =0)
{
  printf("`X::X(const X& x, int)' called\n");
  printf("i = %d\n", i);
}

/*
 * then any use of X's copy constructor is ill-formed because of the
 * ambiguity; no diagnostic is required.
 */

int main()
{
  printf("enter main\n");
  X* px = 0;
  X x = *px;
  f(x);
  X y(*px,5);
  printf("leave main\n");
  return 0;
}
