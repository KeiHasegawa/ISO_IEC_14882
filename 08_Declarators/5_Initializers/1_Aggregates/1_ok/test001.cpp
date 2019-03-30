/*
 * initializer for array works well.
 */
#include <stdio.h>

int x[] = { 1, 3, 5 };

int main()
{
  for ( int i = 0 ; i < sizeof x/sizeof x[0] ; ++i )
    printf(" %d", x[i]);
  printf("\n");
  return 0;
}
