/*
 * function definition works well.
 */
#include <stdio.h>

int max(int a, int b, int c)
{
  int m = (a > b) ? a : b;
  return (m > c) ? m : c;
}

int main()
{
  printf("max(-2, 0, 5) return value : %d\n", max(-2, 0, 5));
  return 0;
}
