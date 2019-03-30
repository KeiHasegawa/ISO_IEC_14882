/*
 * Check declaration scope of for statement is delt collectlly.
 */

#include <stdio.h>

void f()
{
  int i = 42;
  int a[10];
  for (int i = 0; i < 10; i++)
    a[i] = i;
  int j = i; // j = 42
  for ( int k = 0 ; k < sizeof a/sizeof a[0] ; ++k )
    printf(" %d", a[k]);
  printf("\n");
  printf("j = %d\n", j);
}

int main()
{
  f();
  return 0;
}
