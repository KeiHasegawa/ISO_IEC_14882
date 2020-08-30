#include <stdio.h>

struct S {
  S();
};

int main()
{
  (S(), 1);
  return 0;
}

S::S()
{
  printf("S::S() called\n");
}
