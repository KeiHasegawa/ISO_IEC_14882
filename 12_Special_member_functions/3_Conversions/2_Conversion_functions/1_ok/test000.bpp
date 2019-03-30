#include <stdio.h>

class X {
public:
  operator int();
  int m;
};

void f(X a)
{
  printf("`f' called\n");
  int i = int(a);
  printf("i = %d\n", i);
  i = (int)a;
  printf("i = %d\n", i);
  i = a;
  printf("i = %d\n", i);
}

/*
 * In all three cases the value assigned will be converted by
 *  X::operator int().
 */


/*
 * User-defined conversions are not restricted to use in assignments and
 * initializations.
 */
void g(X a, X b)
{
  printf("`g' called\n");
  int i = (a) ? 1+a : 0;
  printf("i = %d\n", i);
  int j = (a&&b) ? a+b : i;
  printf("j = %d\n", j);
  if (a) { // ...
    printf("ok\n");
  }
}

int main()
{
  X x, xx;
  x.m = 3;
  xx.m = 5;
  f(x);
  g(x, xx);
  return 0;
}

X::operator int()
{
  return m;
}
