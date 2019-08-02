/*
 * At most one user-defined conversion (constructor or conversion function) is
 * implicitly applied to a single value.
 */
#include <stdio.h>

class X {
  // ...
public:
  operator int();
};

class Y {
  // ...
public:
  operator X();
};

void f()
{
  Y a;
  int c = X(a); // OK: a.operator X().operator int()
}

int main()
{
  f();
  return 0;
}

X::operator int()
{
  printf("`X::operator int' called\n");
  return 5;
}

Y::operator X()
{
  printf("`Y::operator X' called\n");
  return X();
}
