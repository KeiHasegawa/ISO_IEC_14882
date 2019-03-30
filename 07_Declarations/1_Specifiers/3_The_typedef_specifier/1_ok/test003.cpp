/*
 * unnamed class or enum works well.
 */

#include <stdio.h>

typedef struct { } *ps, S; // S is the class name for linkage purposes

S x;
ps y = &x;

int main()
{
  if ( &x == y )
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
