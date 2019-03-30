/*
 * If a mem-initializer-id is ambiguous because it designates both a direct
 * non-virtual base class and an inherited virtual base class, the
 * mem-initializer is ill-formed.
 */
struct A { A(); };
struct B: public virtual A { };
struct C: public A, public B { C(); };
C::C(): A() { } // ill-formed: which A?
