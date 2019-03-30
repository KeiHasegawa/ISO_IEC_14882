#include <stdio.h>

struct outer {
  struct inner;
  int m;
};

struct outer::inner {
  double m;
};

int main()
{
  outer o;
  printf("o.m = %d\n", o.m = 1234);
  outer::inner i;
  printf("i.m = %f\n", i.m = 5678);
  return 0;
}
