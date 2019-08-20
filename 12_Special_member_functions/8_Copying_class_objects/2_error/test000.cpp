/*
 * if a class X only has a copy constructor with a parameter of type X&,
 * an initializer of type const X or volatile X cannot initialize an object
 * of type (possibly cv-qualified) X.
 */

struct X {
  X(); //default constructor
  X(X&); //copy constructor with a nonconst parameter
};
const X cx;
X x = cx; // error - X::X(X&) cannot copy cx into x
