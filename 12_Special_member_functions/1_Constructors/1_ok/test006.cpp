#include <stdio.h>

struct outer {
  int m;
  outer() : m(1) {}
  struct inner {
    double d;
    inner() : d(2.0) {}
  };
};

int main()
{
  outer o;
  outer::inner i;
  printf("o.m = %d i.d = %f\n", o.m, i.d);
  return 0;
}
