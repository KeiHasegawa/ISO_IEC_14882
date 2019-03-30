/*
 * Array declaration specified by the same name declarator.
 */

#include <stdio.h>

int main()
{
  const int i = 2;
  {
    int i[i];
    printf("sizeof i/sizeof i[0] = %d\n", (int)(sizeof i/sizeof i[0]));
  }
  return 0;
}

