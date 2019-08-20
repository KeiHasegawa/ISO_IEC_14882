/*
 * all forms of copy constructor may be declared for a class.
 */
#include <stdio.h>

class X {
  // ...
public:
  X(const X&);
  X(X&); // OK
};

int main()
{
  X* px = 0;
  X x = *px;
  const X* pcx = 0;
  X xx = *pcx;
  return 0;
}

X::X(const X&)
{
  printf("`X::X(const X&)' called\n");
}

X::X(X&)
{
  printf("`X::X(X&)' called\n");
}
