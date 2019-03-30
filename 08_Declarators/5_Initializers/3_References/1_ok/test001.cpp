/*
 * The initializer can be omitted for a reference only in a parameter
 * declaration (8.3.5), in the declaration of a function return type, in the
 * declaration of a class member within its class declaration (9.2), and where
 * the extern specifier is explicitly used.
 */
#include <stdio.h>

extern int& r2; // OK

void f()
{
  printf("`f' called, r2 = %d\n", r2);
}

int main()
{
  r2 = 3;
  f();
  return 0;
}

int a;
int& r2 = a;
