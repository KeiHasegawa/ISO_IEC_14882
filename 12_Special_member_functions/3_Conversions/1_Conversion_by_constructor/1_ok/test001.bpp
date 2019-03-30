/*
 * An explicit constructor constructs objects just like non-explicit
 * constructors, but does so only where the direct-initialization syntax (8.5)
 * or where casts (5.2.9, 5.4) are explicitly used. A default constructor may
 * be an explicit constructor; such a constructor will be used to perform
 * default-initialization or valueinitialization (8.5).
 */
#include <stdio.h>

class Z {
public:
  explicit Z();
  explicit Z(int);
  int m;
};

Z a; // OK: default-initialization performed
Z a3 = Z(1); // OK: direct initialization syntax used
Z a2(2); // OK: direct initialization syntax used
Z* p = new Z(3); // OK: direct initialization syntax used
Z a4 = (Z)4; // OK: explicit cast used
Z a5 = static_cast<Z>(5); // OK: explicit cast used

int main()
{
  printf("a.m = %d\n", a.m);
  printf("a3.m = %d\n", a3.m);
  printf("a2.m = %d\n", a2.m);
  printf("p->m = %d\n", p->m);
  printf("a4.m = %d\n", a4.m);
  printf("a5.m = %d\n", a5.m);
  return 0;
}

Z::Z() : m(0)
{
}

Z::Z(int n) : m(n)
{
}
