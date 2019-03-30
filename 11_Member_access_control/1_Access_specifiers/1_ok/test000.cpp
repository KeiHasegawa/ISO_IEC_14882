/*
 * An access-specifier specifies the access rules for members following it
 * until the end of the class or until another access-specifier is encountered.
 */
#include <stdio.h>

extern void f();

class X {
  friend void f();
  int a; // X::a is private by default: class used
public:
  int b; // X::b is public
  int c; // X::c is public
};

void f()
{
  printf("`f' called\n");
  X x;
  printf("x.a = %d\n", x.a = 1);
  printf("x.b = %d\n", x.a = 2);
  printf("x.c = %d\n", x.a = 3);
}

int main()
{
  f();
  return 0;
}
