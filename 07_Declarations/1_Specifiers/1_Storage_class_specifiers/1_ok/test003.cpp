/*
 * Check declaration of incomplete object with `extern' is OK.
 * Check declaration of function which returns incomplete type is OK.
 * Check declaration of function which takes incomplete type as a parameter is
 * OK.
 */
#include <stdio.h>

struct S;
extern S a;        // OK
extern S f();      // OK
extern void g(S);  // OK

struct S {
  int m;
};

void h()
{
  g(a);
  f();
}

int main()
{
  h();
  return 0;
}

S a = { 1 };

S f()
{
  printf("`f' called\n");
  S s = { 2 };
  return s;
}

void g(S s)
{
  printf("`g' called\n");
  printf("s.m = %d\n", s.m);
}
