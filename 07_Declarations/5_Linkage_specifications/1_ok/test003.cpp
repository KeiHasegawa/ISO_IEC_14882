/*
 * At most one function with a particular name can have C language linkage.
 * Two declarations for a function with C language linkage with the same
 * function name (ignoring the namespace names that qualify it) that
 * appear in different namespace scopes refer to the same function. Two
 * declarations for an object with C language linkage with the same name
 * (ignoring the namespace names that qualify it) that appear in different
 * namespace scopes refer to the same object.
 */
#include <stdio.h>

namespace A {
  extern "C" int f();
  extern "C" int g() { return 1; }
  extern "C" int h();
}

namespace B {
  extern "C" int f(); // A::f and B::f refer
                      // to the same function
}

int A::f() { return 98; } // definition for the function f
                          // with C language linkage

extern "C" int h() { return 97; }
                          // definition for the function h
                          // with C language linkage
                          // A::h and ::h refer to the same function

int main()
{
  printf("A::f() return value : %d\n", A::f());
  printf("A::g() return value : %d\n", A::g());
  printf("A::h() return value : %d\n", A::h());
  printf("B::f() return value : %d\n", B::f());
  printf("::h() return value : %d\n", ::h());
  return 0;
}
