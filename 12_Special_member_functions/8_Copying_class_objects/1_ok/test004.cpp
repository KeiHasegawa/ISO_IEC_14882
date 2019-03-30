/*
 * The implicitly-defined copy assignment operator for class X performs
 * memberwise assignment of its subobjects. The direct base classes of X are
 * assigned first, in the order of their declaration in the base-specifierlist,
 * and then the immediate nonstatic data members of X are assigned, in the
 * order in which they were declared in the class definition. Each subobject
 * is assigned in the manner appropriate to its type:
 * - if the subobject is of class type, the copy assignment operator for the
 * class is used (as if by explicit qualification; that is, ignoring any
 * possible virtual overriding functions in more derived classes);
 * - if the subobject is an array, each element is assigned, in the manner
 *   appropriate to the element type;
 * - if the subobject is of scalar type, the built-in assignment operator is
 *   used.
 * It is unspecified whether subobjects representing virtual base classes are
 * assigned more than once by the implicitly-defined copy assignment operator.
 */
#include <stdio.h>

struct V { };
struct A : virtual V { };
struct B : virtual V { };
struct C : B, A { };

/*
 * it is unspecified whether the virtual base class subobject V is assigned
 * twice by the implicitly-defined copy assignment operator for C.
 */

int main()
{
  printf("enter main\n");
  C u, v;
  u = v;
  printf("leave main\n");
  return 0;
}

