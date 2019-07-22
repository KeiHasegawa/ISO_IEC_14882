#include <stdio.h>

struct X {
  int& r;
  X(int& rr) : r(rr) {}
};

void f(X x)
{
  printf("x.r = %d\n",x.r);
}

int main()
{
  int a = 1;
  f(X(a));
  return 0;
}
