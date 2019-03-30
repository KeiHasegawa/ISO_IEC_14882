/*
 * Constructors do not have names. A special declarator syntax using an
 * optional sequence of functionspecifiers (7.1.2) followed by the
 * constructor's class name followed by a parameter list is used to declare or
 * define the constructor. In such a declaration, optional parentheses around
 * the constructor class name are ignored.
 */
#include <stdio.h>

class C {
public:
  C(); //declares the constructor
};

C::C() { printf("`C::C' called\n"); } // defines the constructor

int main()
{
  C c;
  return 0;
}
