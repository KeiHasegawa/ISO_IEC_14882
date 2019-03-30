/*
 * If the name of an overloaded function is unambiguously found, overloading
 * resolution (13.3) also takes place before access control. Ambiguities can
 * often be resolved by qualifying a name with its class name.
 */
#include <stdio.h>

class A {
public:
  int f();
};

class B {
public:
  int f();
};

class C : public A, public B {
public:
  int f() { return A::f() + B::f(); }
};

void f()
{
  C c;
  c.f();
}

int main()
{
  f();
  return 0;
}

int A::f()
{
  printf("`A::f' called\n");
  return 1;
}

int B::f()
{
  printf("`B::f' called\n");
  return 2;
}
