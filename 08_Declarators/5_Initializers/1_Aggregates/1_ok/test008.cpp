/*
 * Braces can be elided in an initializer-list as follows. If the
 * initializer-list begins with a left brace, then the succeeding
 * comma-separated list of initializers initializes the members of a
 * subaggregate; it is erroneous for there to be more initializers than
 * members. If, however, the initializer-list for a subaggregate does not begin
 * with a left brace, then only enough initializers from the list are taken to
 * initialize the members of the subaggregate; any remaining initializers are
 * left to initialize the next member of the aggregate of which the current
 * subaggregate is a member.
 */
#include <stdio.h>

float y[4][3] = {
  1, 3, 5, 2, 4, 6, 3, 5, 7
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
