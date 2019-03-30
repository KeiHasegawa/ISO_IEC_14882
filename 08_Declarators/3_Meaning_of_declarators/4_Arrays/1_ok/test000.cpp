/*
 * Check typedefed array works well.
 */
#include <stdio.h>

typedef int A[5], AA[2][3];
typedef const A CA; // type is ``array of 5 const int''
typedef const AA CAA; // type is ``array of 2 array of 3 const int''

void f()
{
  CA a = { 0, 1, 2, 3, 4 };
  CAA b = {
    { 5, 6, 7 },
    { 8, 9, 10 },
  };

  for ( int i = 0 ; i < sizeof a/sizeof a[0] ; ++i )
    printf(" %d", a[i]);
  printf("\n");

  for ( int i = 0 ; i < sizeof b/sizeof b[0] ; ++i ){
    for ( int j = 0 ; j < sizeof b[0]/sizeof b[0][0] ; ++j )
      printf(" %d", b[i][j]);
    printf("\n");
  }
}

int main()
{
  f();
  return 0;
}
