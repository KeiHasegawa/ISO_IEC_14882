#include <stdio.h>

struct T {
  T(int);
  void f(int);
};

int main()
{
  T t(3);
  t.f(7);
  return 0;
}


T::T(int a)
{
  printf("T::T(int) called with %d\n", a);
}

void T::f(int a)
{
  printf("T::f(int) called with %d\n", a);
  T(a+5);
}
