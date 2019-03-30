#include <stdio.h>

int main()
{
  int a = 1, b = 2, c = 3;
  printf("a = %d, b = %d, c = %d\n", a, b, c);
  (a,b,c) = 4;
  printf("a = %d, b = %d, c = %d\n", a, b, c);
  return 0;
}
