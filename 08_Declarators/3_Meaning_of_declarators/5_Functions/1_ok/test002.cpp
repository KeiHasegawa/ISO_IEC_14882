/*
 * function declaration using typedefed-name.
 */
#include <stdio.h>

typedef void F();
F fv; // OK: equivalent to void fv();
void fv() { printf("`fv' called\n"); } // OK: definition of fv

int main()
{
  fv();
  return 0;
}
