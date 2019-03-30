#include <stdio.h>

int a = 0;

int b = 1;

int c = a && b;

int main()
{
  printf("%d && %d = %d\n", a, b, c);
  return 0;
}
