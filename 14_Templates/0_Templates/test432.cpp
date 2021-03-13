#include <stdio.h>

template<class C1> void f(C1 a)
{
  printf("a = %d\n", a);
}

template<class C2> void f(C2* p)
{
  printf("*p = %d\n", *p);
}

template<class C3> void f(C3 (*pf)())
{
  printf("(*pf)() return %f\n", (*pf)());
}

template<> void f(double d)
{
  printf("d = %f\n", d);
}

template<> void f(const char* s)
{
  printf("\"%s\"\n", s);
}

template<> void f(int (*pf)())
{
  printf("(*pf) return %d\n", (*pf)());
}

double g(){ return 4.0; }

int h(){ return 5; }

int main()
{
  f(1);
  f(2.0);
  int a = 3;
  f(&a);
  f("abcd");
  f(g);
  f(h);
  return 0;
}

