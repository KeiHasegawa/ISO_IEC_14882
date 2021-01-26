#include <stdio.h>

double f();

struct S {
  typedef decltype(f()) T;
};

int main()
{
  S::T x = 0.5;
  printf("x = %f\n", x);
  return 0;
}
