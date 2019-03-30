#include <stdio.h>

int i,
*pi,
f(),
*fpi(int),
(*pif)(const char*, const char*),
(*fpif(int))(int);

void g()
{
  printf("`f' called\n");
  printf("i = %d\n", i);
  printf("*pi = %d\n", *pi);
  printf("f() return value %d\n", f());
  int* p = fpi(3);
  printf("*p = %d\n", *p);
  int n = (*pif)("Programming", "Languages");
  printf("n = %d\n", n);
  int (*r)(int) = (*fpif)(4);
  int m = (*r)(5);
  printf("m = %d\n", m);
}

int x(const char* a, const char* b)
{
  printf("`x' called with \"%s\" and \"%s\"\n", a, b);
  return -5;
}

int main()
{
  int n = 123;
  pi = &n;
  pif = x;
  g();
  return 0;
}

int f()
{
  printf("`f' called\n");
  return -1;
}

int *fpi(int n)
{
  printf("`fpi' called with %d\n", n);
  static int s;
  s = n + 5;
  return &s;
}

int h(int a)
{
  printf("`h' called with %d\n", a);
  return a * 2;
}

int (*fpif(int a))(int)
{
  printf("`fpif' called with %d\n", a);
  return h;
}
