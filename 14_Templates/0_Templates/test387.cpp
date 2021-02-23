#include <stdio.h>

template<class C1> void f(C1 a)
{
  printf("f(C1) called with %d\n", a);
}

template<class C2> void f(C2& r)
{
  printf("f(C2&) called with %d\n", r);
}

int main()
{
  f(3);
  return 0;
}
