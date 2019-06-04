/*
 * The following steps define the result of name lookup in a class scope, C.
 * First, every declaration for the name in the class and in each of its base
 * class sub-objects is considered. A member name f in one subobject B hides
 * a member name f in a sub-object A if A is a base class sub-object of B.
 * Any declarations that are so hidden are eliminated from consideration. Each
 * of these declarations that was introduced by a using-declaration is
 * considered to be from each sub-object of C that is of the type containing
 * the declaration designated by the using-declaration.96) If the resulting set
 * of declarations are not all from sub-objects of the same type, or the set
 * has a nonstatic member and includes members from distinct sub-objects,
 * there is an ambiguity and the program is ill-formed. Otherwise that set is
 * the result of the lookup.
 */
#include <stdio.h>

class A {
public:
  int a;
  int (*b)();
  int f();
  int f(int);
  int g();
};

class B {
  int a;
  int b();
public:
  int f();
  int g;
  int h();
  int h(int);
};

class C : public A, public B {};

void g(C* pc)
{
  pc->h(); // OK
  pc->h(1); // OK
}

int main()
{
  C c;
  g(&c);
  return 0;
}

int A::f()
{
  printf("`A::f' called\n");
  return 1;
}

int A::f(int n)
{
  printf("`A::f' called with %d\n", n);
  return n + 2;
}

int A::g()
{
  printf("`A::g' called\n");
  return 3;
}

int B::b()
{
  printf("`B::b' called\n");
  return 4;
}

int B::f()
{
  printf("`B::f' called\n");
  return 5;
}

int B::h()
{
  printf("`B::h' called\n");
  return 6;
}

int B::h(int n)
{
  printf("`B::h' called with %d\n", n);
  return 7;
}
