/*
 * To explicitly or implicitly convert a pointer (an lvalue) referring to an
 * object of class X to a pointer (reference) to a direct or indirect base
 * class B of X, the construction of X and the construction of all of its
 * direct or indirect bases that directly or indirectly derive from B shall
 * have started and the destruction of these classes shall not have completed,
 * otherwise the conversion results in undefined behavior. To form a pointer
 * to (or access the value of) a direct nonstatic member of an object obj, the
 * construction of obj shall have started and its destruction shall not have
 * completed, otherwise the computation of the pointer value (or accessing
 * the member value) results in undefined behavior.
 */
#include <stdio.h>

struct A { int m; };
struct B : virtual A { };
struct C : B { };
struct D : virtual A { D(A*); };
struct X { X(A*); };
struct E : C, D, X {
  E() :          // D(this), // undefined: upcast from E* to A*
                 // might use path E* -> D* -> A*
                 // but D is not constructed
        D((C*)this), // defined:
                 // E* -> C* defined because E() has started
                 // and C* -> A* defined because
                 // C fully constructed
	X(this)  // defined: upon construction of X,
                 // C/B/D/A sublattice is fully constructed
  { }
};

int main()
{
  E e;
  return 0;
}

D::D(A* pa)
{
  printf("`D::D(A*)' called\n");
  printf("pa->m = %d\n", pa->m = 1);
}

X::X(A* pa)
{
  printf("`X::X(A*)' called\n");
  printf("pa->m = %d\n", pa->m = 2);
}
