/*
 * Check 3 dimension array works well
 */
#include <stdio.h>

void f(int i, int j, int k)
{
  static int x3d[3][5][7];
  static int first = 1;
  if ( first ){
    for ( int i = 0 ; i < 3 ; ++i ){
      for ( int j = 0 ; j < 5 ; ++j ){
	for ( int k = 0 ; k < 7 ; ++k ){
	  x3d[i][j][k] = (i << 6) + (j << 3) + k;
	}
      }
    }
    first = 0;
    return;
  }
  printf("%d\n", x3d[i][j][k]);
}

int main()
{
  f(0,0,0);
  f(1,2,3);
  f(2,3,4);
  return 0;
}

