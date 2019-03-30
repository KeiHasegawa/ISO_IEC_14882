/*
 * Type names obey exactly the same scope rules as other names. In particular,
 * type names defined within a class definition cannot be used outside their
 * class without qualification.
 */
#include <stdio.h>

class X {
public:
  typedef int I;
  class Y { public: int m; };
  I a;
};

X::Y d; // OK
X::I e; // OK

void f()
{
  printf("d.m = %d\n", d.m = 246);
  printf("e = %d\n", e = 357);
  X a;
  printf("a.a = %d\n", a.a = 468);
}

int main()
{
  f();
  return 0;
}
