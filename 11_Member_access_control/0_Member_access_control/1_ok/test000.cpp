/*
 * Members of a class defined with the keyword class are private by default.
 * Members of a class defined with the keywords struct or union are public by
 * default.
 */
#include <stdio.h>

void f(void);

class X {
  friend void f(void);
  int a; // X::a is private by default
};

struct S {
  int a; // S::a is public by default
};

void f(void)
{
  printf("`f' called\n");
  X x;
  printf("x.a = %d\n", x.a = 1);
}

void g(void)
{
  printf("`g' called\n");
  S s;
  printf("s.a = %d\n", s.a = 2);
}

int main()
{
  f();
  g();
  return 0;
}
