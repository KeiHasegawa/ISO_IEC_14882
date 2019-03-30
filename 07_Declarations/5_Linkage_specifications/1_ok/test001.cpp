/*
 * Linkage specifications nest. When linkage specifications nest, the innermost
 * one determines the language linkage. A linkage specification does not
 * establish a scope. A linkage-specification shall occur only in namespace
 * scope (3.3). In a linkage-specification, the specified language linkage
 * applies to the function types of all function declarators, function names,
 * and variable names introduced by the declaration(s).
 */
#include <stdio.h>

extern "C" void f1(void(*pf)(int));
                          // the name f1 and its function type have C language
                          // linkage; pf is a pointer to a C function

extern "C" typedef void FUNC();
FUNC f2; // the name f2 has C++ language linkage and the
         // function's type has C language linkage

extern "C" FUNC f3; // the name of function f3 and the function's type
                    // have C language linkage

void (*pf2)(FUNC*); // the name of the variable pf2 has C++ linkage and
                    // the type of pf2 is pointer to C++ function that
                    // takes one parameter of type pointer to C function


extern "C" void g1(int a)
{
  printf("`g1' called with %d\n", a);
}

void g2(FUNC* pf)
{
  printf("`g2' called\n");
  (*pf)();
}

int main()
{
  f1(g1);
  f2();
  f3();
  (*pf2)(f3);
  return 0;
}

extern "C" void f1(void(*pf)(int))
{
  printf("`f1' called\n");
  (*pf)(3);
}

void f2()
{
  printf("`f2' called\n");
}

extern "C" void f3()
{
  printf("`f3' called\n");
  pf2 = g2;
}
