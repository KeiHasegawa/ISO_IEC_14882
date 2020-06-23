#include <stdio.h>

struct S {
  static const int x = 123;
};

struct T {
  static const int y = 456;
};

int main()
{
  printf("S::x = %d\n", S::x);
  printf("T::y = %d\n", T::y);
  return 0;
}

const int T::y;

