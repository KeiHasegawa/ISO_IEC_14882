/*
 * It is possible to identify uniquely the location in the abstract-declarator
 * where the identifier would appear if the construction were a declarator in
 * a declaration. The named type is then the same as the type of the
 * hypothetical identifier.
 */
#include <stdio.h>

int a[] = { 3, 4, 5 };

int g(double d)
{
  printf("`g' called with %f\n", d);
  return d+1;
}

void test000()
{
  printf("`test000' called\n");
  int i;
  printf("i = %d\n", i = 1);
  int *pi;
  pi = &i;
  printf("*pi = %d\n", *pi = 2);
  int *p[3];
  p[0] = pi;
  printf("*p[0] = %d\n", *p[0] = 3);
  int (*p3i)[3];
  p3i = &a;
  printf("(*p3i)[1] = %d\n", (*p3i)[1]);
  int *f();
  int* ptr = f();
  printf("*ptr = %d\n", *ptr);
  int (*pf)(double);
  pf = g;
  int n = (*pf)(6);
  printf("n = %d\n", n);
}

int* f()
{
  printf("`f' called\n");
  static int s = 5;
  return &s;
}

void test001()
{
  printf("`test001' called\n");
  void h1(int);
  h1(8);
  void h2(int *);
  h2(&a[0]);
  void h3(int *[3]);
  int* p = &a[1];
  h3(&p);
  void h4(int (*)[3]);
  h4(&a);
  void h5(int *());
  h5(f);
  void h6(int (*)(double));
  h6(g);
}

void h1(int a)
{
  printf("`h1' called with %d\n", a);
}

void h2(int *p)
{
  printf("`h2' called\n");
  printf("*p + 6 = %d\n", *p + 6);
}

void h3(int *a[3])
{
  printf("`h3' called\n");
  printf("6 + *a[0] = %d\n", 6 + *a[0]);
}

void h4(int (*a)[3])
{
  printf("`h4' called\n");
  for ( int i = 0 ; i < 3 ; ++i )
    printf("%d\n", (*a)[i] + 8);
}

void h5(int* fun())
{
  printf("`h5' called\n");
  int* p = fun();
  *p = 14;
  printf("*p = %d\n", *p);
}

void h6(int (*pf)(double))
{
  printf("`h6' called\n");
  (*pf)(15);
}

int main()
{
  test000();
  test001();
  return 0;
}
