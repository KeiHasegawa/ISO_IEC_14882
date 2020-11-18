#include <stdio.h>

struct outer {
  int m;
  int f(){ return m; }
  struct inner {
    double d;
    double g(){ return d; }
  };
};

int main()
{
  outer o;
  o.m = 1;
  outer::inner i;
  i.d = 2.0;
  printf("o.f() return %d\n", o.f());
  printf("i.g() return %f\n", i.g());
  return 0;
}
