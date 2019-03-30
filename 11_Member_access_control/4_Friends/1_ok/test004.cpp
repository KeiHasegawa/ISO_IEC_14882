/*
 * If a friend declaration appears in a local class (9.8) and the name
 * specified is an unqualified name, a prior declaration is looked up without
 * considering scopes that are outside the innermost enclosing non-class
 * scope. For a friend function declaration, if there is no prior declaration,
 * the program is ill-formed. For a friend class declaration, if there is no
 * prior declaration, the class that is specified belongs to the innermost
 * enclosing non-class scope, but if it is subsequently referenced, its name
 * is not found by name lookup until a matching declaration is provided in
 * the innermost enclosing nonclass scope.
 */
#include <stdio.h>

class X;
void a();
void f() {
  class Y;
  extern void b();
  class A {
    friend class X; // OK, but X is a local class, not ::X
    friend class Y; // OK
    friend class Z; // OK, introduces local class Z
    friend void b(); // OK
  };
  X *px; // OK, but ::X is found
}

int main()
{
  printf("just ok compile test.\n");
  return 0;
}

