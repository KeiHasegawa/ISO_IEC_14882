/*
 * [Note: because a base-clause for a nested class is part of the declaration
 * of the nested class itself (and not part of the declarations of the members
 * of the nested class), the base-clause may refer to the private members
 * of the enclosing class.
 */
#include <stdio.h>

class C {
  class A { };
  A *p; // OK
  class B : A // OK
  {
    A *q; // OK because of injection of name A in A
    B *s; // OK because of injection of name B in B
  };
};

int main()
{
  printf("just ok compile test\n");
  return 0;
}

