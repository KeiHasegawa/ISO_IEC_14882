#include <stdio.h>

struct S {
  typedef int INT;
  void f(INT);
};

void S::f(INT)
{
  printf("S::f called\n");
}

int main()
{
  S s;
  s.f(3);
  return 0;
}
