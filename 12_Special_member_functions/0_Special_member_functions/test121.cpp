#include <stdio.h>

struct S {
  S(int);
  S(const S&);
};

int main()
{
  S s = 1;
  return 0;
}

S::S(int a)
{
  printf("S::S(int) called with %d\n", a);
}

S::S(const S&)
{
  printf("S::S(const S&) called\n");
}
