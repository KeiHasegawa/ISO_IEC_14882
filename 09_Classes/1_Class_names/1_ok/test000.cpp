/*
 * Check if simple class declaration works well.
 */
#include <stdio.h>

struct X { int a; };
struct Y { int a; };
X a1;
Y a2;
int a3;

int f(X);
int f(Y);

void g()
{
  printf("`g' called\n");
  printf("a1.a = %d\n", a1.a);
  printf("a2.a = %d\n", a2.a);
  f(a1);
  f(a2);
}

int main()
{
  a1.a = 1;
  a2.a = 2;
  g();
  return 0;
}

int f(X x)
{
  printf("`f(X)' called\n");
  printf("x.a = %d\n", x.a);
  return 1;
}

int f(Y y)
{
  printf("`f(Y)' called\n");
  printf("y.a = %d\n", y.a);
  return 2;
}

