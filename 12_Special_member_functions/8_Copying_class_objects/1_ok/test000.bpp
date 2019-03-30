/*
 * A non-template constructor for class X is a copy constructor if its first
 * parameter is of type X&, const X&, volatile X& or const volatile X&, and
 * either there are no other parameters or else all other parameters have
 * default arguments (8.3.6)
 */
#include <stdio.h>

class X {
  // ...
public:
  X(int);
  X(const X&, int = 1);
};

X a(1); // calls X(int);
X b(a, 0); // calls X(const X&, int);
X c = b; // calls X(const X&, int);

int main()
{
  return 0;
}

X::X(int a)
{
  printf("`X::X(int)' called with %d\n", a);
}

X::X(const X& x, int a)
{
  printf("`X::X(const X&, int)' called with %d\n", a);
}
