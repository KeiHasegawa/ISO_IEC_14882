/*
 * If class X is defined in a namespace scope, a nested class Y may be declared
 * in class X and later defined in the definition of class X or be later
 * defined in a namespace scope enclosing the definition of class X.
 */
#include <stdio.h>

class E {
public:
  class I1; // forward declaration of nested class
  class I2;
  class I1 { public: int n; }; // definition of nested class
};

class E::I2 { public: int m; }; // definition of nested class

void f()
{
  E::I1 i1;
  printf("i1.n = %d\n", i1.n = -1);
  E::I2 i2;
  printf("i2.m = %d\n", i2.m = -2);
}

int main()
{
  f();
  return 0;
}
