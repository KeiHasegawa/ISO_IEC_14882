#include <stdio.h>

struct M {
  M()
  {
    printf("M::M() called\n");
  }
};

struct S {
  M m;
  S() : m()
  {
    printf("S::S() called\n");
  }
};

int main()
{
  S s;
  return 0;
}
