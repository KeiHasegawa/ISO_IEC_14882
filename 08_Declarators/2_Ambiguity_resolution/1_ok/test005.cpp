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
void f(int(C)) // void f(int (*fp)(C c)) { }
               // not: void f(int C);
{
  printf("`f' called\n");
}

int g(C);
void foo() {
  f(g); //OK
}

int main()
{
  foo();
  return 0;
}

int g(C)
{
  printf("`g' called\n");
  return 0;
}

