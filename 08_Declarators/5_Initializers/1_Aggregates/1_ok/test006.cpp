/*
 * When initializing a multi-dimensional array, the initializers initialize the
 * elements with the last (rightmost) index of the array varying the fastest.
 */
#include <stdio.h>

float y[4][3] = {
  { 1 }, { 2 }, { 3 }, { 4 }
};

void test000()
{
  for ( int i = 0 ; i < sizeof y/sizeof y[0] ; ++i ){
    for ( int j = 0 ; j < sizeof y[0]/sizeof y[0][0] ; ++j )
      printf(" %f", y[i][j]);
    printf("\n");
  }
}

int main()
{
  test000();
  return 0;
}
