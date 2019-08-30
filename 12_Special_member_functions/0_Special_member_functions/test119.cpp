#include <stdio.h>

struct S {
  S(int ii, double dd) : i(ii), d(dd) {}
  int i;
  double d;
};

int main()
{
  S s(3, 4.0);
  printf("s.i = %d s.d = %f\n", s.i, s.d);
  return 0;
}
