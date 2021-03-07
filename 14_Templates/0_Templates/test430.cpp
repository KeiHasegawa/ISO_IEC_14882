#include <stdio.h>

template<class C1> void f(C1 a)
{
  printf("a = %d\n", a);
}

template<class C2> void f(C2 a, C2 b)
{
  printf("a = %f b = %f\n", a, b);
}

void f()
{
  printf("`f()' called\n");
}

int main()
{
  f(1);
  f(2.3, 4.5);
  f();
  return 0;
}
