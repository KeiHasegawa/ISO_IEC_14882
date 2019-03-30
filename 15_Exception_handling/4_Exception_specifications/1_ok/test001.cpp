/*
 * An implementation shall not reject an expression merely because when
 * executed it throws or might throw an exception that the containing function
 * does not allow.
 */
#include <stdio.h>

class X {};
class Y {};

extern void f() throw(X, Y);
void g() throw(X)
{
  f(); //OK
}

int main()
{
  printf("just ok compile test\n");
  return 0;
}

void f() throw(X, Y)
{
}
