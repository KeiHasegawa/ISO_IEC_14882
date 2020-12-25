#include <stdio.h>

struct S {
  int m;
};

void f(S&& rr)
{
  int x = rr.m;
  printf("x = %d\n", x);
}

S g()
{
  S s = { 123 };
  return s;
}

int main()
{
  f(g());
  return 0;
}
