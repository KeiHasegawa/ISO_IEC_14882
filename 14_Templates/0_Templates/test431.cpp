#include <stdio.h>

template<class C1> void f(C1 a)
{
  printf("a = %f\n", a);
}

template<class C2> void f(C2* p)
{
  printf("\"%s\"\n", p);
}

template<> void f<int>(int a)
{
  printf("a = %d\n", a);
}

template<> void f<int>(int* p)
{
  printf("*p = %d\n", *p);
}

int main()
{
  f(1.0);
  f("abcdef");
  f(2);
  int a = 3;
  f(&a);
  return 0;
}
