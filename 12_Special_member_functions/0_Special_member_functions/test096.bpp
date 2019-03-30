#include <stdio.h>

struct S {
  typedef int INT;
  S(INT);
};

S::S(INT)
{
  printf("S::S(INT) called\n");
}

int main()
{
  S s(5);
  return 0;
}
