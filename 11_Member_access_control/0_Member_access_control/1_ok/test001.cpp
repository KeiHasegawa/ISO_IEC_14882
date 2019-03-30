/*
 * Access control is applied uniformly to all names, whether the names are
 * referred to from declarations or expressions.
 */
#include <stdio.h>

class A
{
  class B {
  public:
    int b;
  };
public:
  typedef B BB;
};

void f()
{
  printf("`f' called\n");
  A::BB x; // OK, typedef name A::BB is public
  printf("x.b = %d\n", x.b = 3);
}

int main()
{
  f();
  return 0;
}
