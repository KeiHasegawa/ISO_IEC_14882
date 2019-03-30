#include <stdio.h>

struct T {
  int a;
  static T (x); // same with static T x;
  T();
};

int main()
{
  T t;
  printf("T::x.a = %d\n", T::x.a =123);
  return 0;
}

T T::x;

T::T()
{
  printf("T::T() is called\n");
}

