#include <stdio.h>

struct S {
  operator int()
  {
    printf("operator int called\n");
    return -100;
  }
};

struct SS : public S {};

int main()
{
  SS a;
  int i = a;
  printf("i = %d\n", i);
  return 0;
}
