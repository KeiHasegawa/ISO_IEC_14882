#include <stdio.h>

void f(...)
{
  printf("`f(...)' called\n");
}

struct S { int m; };

int main()
{
  f();
  f(1);
  S s;
  f(3.0, s);
  return 0;
}
