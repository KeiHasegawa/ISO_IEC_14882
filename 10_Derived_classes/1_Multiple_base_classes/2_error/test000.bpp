/*
 * A class shall not be specified as a direct base class of a derived class
 * more than once. [Note: a class can be an indirect base class more than once
 * and can be a direct and an indirect base class. There are limited things
 * that can be done with such a class. The non-static data members and member
 * functions of the direct base class cannot be referred to in the scope of
 * the derived class. However, the static members, enumerations and types can
 * be unambiguously referred to.
 */
class X { /* ... */ };
class Y : public X, public X { /* ... */ }; // ill-formed
class L { public: int next; /* ... */ };
class A : public L { /* ... */ };
class B : public L { /* ... */ };
class C : public A, public B { void f(); /* ... */ }; // well-formed
class D : public A, public L { void f(); /* ... */ }; // well-formed
