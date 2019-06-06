/*
 * An explicit or implicit conversion from a pointer to or an lvalue of a
 * derived class to a pointer or reference to one of its base classes shall
 * unambiguously refer to a unique object representing the base class.
 */
class V { };

class A { };

class B : public A, public virtual V { };

class C : public A, public virtual V { };

class D : public B, public C { };

void g()
{
  D d;
  B* pb = &d;
  A* pa = &d; // error, ambiguous: C's A or B's A?
  V* pv = &d; // OK: only one V sub-object
}
