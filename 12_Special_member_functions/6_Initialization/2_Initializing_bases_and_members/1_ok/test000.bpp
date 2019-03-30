/*
 * Names in a mem-initializer-id are looked up in the scope of the
 * constructor's class and, if not found in that scope, are looked up in the
 * scope containing the constructor's definition. [Note: if the constructor's
 * class contains a member with the same name as a direct or virtual base class
 * of the class, a mem-initializer-id naming the member or base class and
 * composed of a single identifier refers to the class member. A
 * meminitializer-id for the hidden base class may be specified using a
 * qualified name. ] Unless the meminitializer-id names a nonstatic data member
 * of the constructor's class or a direct or virtual base of that class,
 * the mem-initializer is ill-formed. A mem-initializer-list can initialize a
 * base class using any name that denotes that base class type.
 */
#include <stdio.h>

struct A { A(); };
typedef A global_A;
struct B { };
struct C: public A, public B { C(); };
C::C(): global_A() { } // mem-initializer for base A

int main()
{
  C c;
  return 0;
}

A::A()
{
  printf("`A::A' called\n");
}
