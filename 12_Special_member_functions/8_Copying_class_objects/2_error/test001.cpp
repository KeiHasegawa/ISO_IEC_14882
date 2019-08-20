/*
 * A user-declared copy assignment operator X::operator= is a non-static
 * non-template member function of class X with exactly one parameter of type
 * X, X&, const X&, volatile X& or const volatile X&. [Note: an overloaded
 * assignment operator must be declared to have only one parameter; see 13.5.3.
 * ] [Note: more than one form of copy assignment operator may be declared for
 * a class. ] [Note: if a class X only has a copy assignment operator with a
 * parameter of type X&, an expression of type const X cannot be assigned to
 * an object of type X.]
 */
struct X {
  X();
  X& operator=(X&);
};
const X cx;
X x;
void f() {
  x = cx; // error:
          // X::operator=(X&) cannot assign cx into x
}
