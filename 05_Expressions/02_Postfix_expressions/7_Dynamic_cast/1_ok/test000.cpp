#include <stdio.h>

struct B { int i; };
struct D : B {};
void foo(D* dp)
{
  printf("`foo' called\n");
  B* bp = dynamic_cast<B*>(dp); // equivalent to B* bp = dp;
  printf("%d\n", bp->i);
}

int main()
{
  D d;
  d.i = 3;
  foo(&d);
  return 0;
}
