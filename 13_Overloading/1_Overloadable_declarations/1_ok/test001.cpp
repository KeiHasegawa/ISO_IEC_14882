/*
 * Certain function declarations cannot be overloaded:
 * ...
 * - Parameter declarations that differ only in the use of equivalent typedef
 *   "types" are equivalent. A typedef is not a separate type, but only a
 *   synonym for another type (7.1.3).
 * ...
 */
#include <stdio.h>

typedef int Int;
void f(int i);
void f(Int i); // OK: redeclaration of f(int)
void f(int i) { printf("`f(int)' called with %d\n", i); }

int main()
{
  f(5);
  return 0;
}

