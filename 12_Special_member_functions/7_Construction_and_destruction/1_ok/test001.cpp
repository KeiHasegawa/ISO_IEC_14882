/*
 * For an object of non-POD class type (clause 9), before the constructor
 * begins execution and after the destructor finishes execution, referring to
 * any nonstatic member or base class of the object results in undefined
 * behavior.
 */
#include <stdio.h>

struct W { int j; };
struct X : public virtual W { };
struct Y {
  int *p;
  X x;
  Y() : p(&x.j) // undefined, x is not yet constructed
  { }
};

int main()
{
  printf("just ok compile test\n");
  return 0;
}
