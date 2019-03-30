// inline function version of test003.cpp
#include <stdio.h>

namespace A {
  extern "C" inline int f();
  extern "C" inline int g() { return 1; }
  extern "C" inline int h();
}

namespace B {
  extern "C" inline int f(); // A::f and B::f refer
                             // to the same function
}

extern "C" inline int h();

int main()
{
  printf("A::f() return value : %d\n", A::f());
  printf("A::g() return value : %d\n", A::g());
  printf("A::h() return value : %d\n", A::h());
  printf("B::f() return value : %d\n", B::f());
  printf("::h() return value : %d\n", ::h());
  return 0;
}

inline int A::f() { return 98; } // definition for the function f
                                 // with C language linkage

extern "C" inline int h() { return 97; }
                          // definition for the function h
                          // with C language linkage
                          // A::h and ::h refer to the same function
