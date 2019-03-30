#include <stdio.h>

struct T {
  T()
  {
    printf("T::T called\n");
  }
};

struct S {
  static T s;
};

T S::s;

int main()
{
  return 0;
}
