/*
 * The expression-list in a mem-initializer is used to initialize the base
 * class or nonstatic data member subobject denoted by the mem-initializer-id.
 * The semantics of a mem-initializer are as follows:
 * - if the expression-list of the mem-initializer is omitted, the base class
 *   or member subobject is value initialized (see 8.5);
 * - otherwise, the subobject indicated by mem-initializer-id is
 *   direct-initialized using expression-list as the initializer (see 8.5).
 */
#include <stdio.h>

struct B1 { B1(int); int x; };
struct B2 { B2(int); int y; };
struct D : B1, B2 {
  D(int);
  B1 b;
  const int c;
};

D::D(int a) : B2(a+1), B1(a+2), c(a+3), b(a+4)
{ /* ... */ }

D d(10);

int main()
{
  printf("d.x = %d\n", d.x);
  printf("d.y = %d\n", d.y);
  printf("d.b.x = %d\n", d.b.x);
  printf("d.c = %d\n", d.c);
  return 0;
}

B1::B1(int xx) : x(xx) {}

B2::B2(int yy) : y(yy) {}

