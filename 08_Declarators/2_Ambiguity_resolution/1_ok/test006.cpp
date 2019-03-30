/*
 * Another ambiguity arises in a parameter-declaration-clause of a function
 * declaration, or in a type-id that is the operand of a sizeof or typeid
 * operator, when a type-name is nested in parentheses. In this case, the
 * choice is between the declaration of a parameter of type pointer to function
 * and the declaration of a parameter with redundant parentheses around the
 * declarator-id. The resolution is to consider the type-name as a
 * simple-type-specifier rather than a declarator-id.
 */
#include <stdio.h>
class C { };
void h(int *(C[10])); // void h(int *(*_fp)(C _parm[10]));
                      // not: void h(int *C[10]);

int *f(C _parm[10])
{
  printf("`f' called\n");
  static int s;
  return &s;
}

int main()
{
  h(f);
  return 0;
}

void h(int* (*fp)(C[10]))
{
  printf("`h' called\n");
  C a[10];
  (*fp)(&a[0]);
}
