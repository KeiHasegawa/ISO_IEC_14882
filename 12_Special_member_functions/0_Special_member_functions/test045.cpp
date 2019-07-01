#include <stdio.h>

struct M {
  M()
  {
    printf("M::M called\n");
  }
};

struct X { M m; };

int main()
{
  X x;
  return 0;
}
