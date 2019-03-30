/*
 * When initializing a multi-dimensional array, the initializers initialize the
 * elements with the last (rightmost) index of the array varying the fastest.
 */
#include <stdio.h>

int x[2][2] = { 3, 1, 4, 2 };

void test000()
{
  for ( int i = 0 ; i < sizeof x/sizeof x[0] ; ++i ){
    for ( int j = 0 ; j < sizeof x[0]/sizeof x[0][0] ; ++j )
      printf(" %d", x[i][j]);
  }
  printf("\n");
}

int main()
{
  test000();
  return 0;
}
