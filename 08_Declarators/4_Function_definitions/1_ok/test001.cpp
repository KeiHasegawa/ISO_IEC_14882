/*
 * ommit parameter name works well.
 */
#include <stdio.h>

void print(int a, int)
{
  printf("a = %d\n",a);
}

int main()
{
  print(3,4);
  return 0;
}
