#include <stdio.h>

int j = 24;

int main()
{
  int i = j, j;
  j = 42;
  printf("i = %d, j = %d\n", i, j);
  return 0;
}
