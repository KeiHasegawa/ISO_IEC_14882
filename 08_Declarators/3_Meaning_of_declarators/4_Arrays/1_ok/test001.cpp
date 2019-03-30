/*
 * Check declarator of array of pointer works well
 */
#include <stdio.h>

float fa[17], *afp[17];

void f()
{
  printf("`f' called\n");
  printf("print fa\n");
  for ( int i = 0 ; i < sizeof fa/sizeof fa[0] ; ++i )
    printf("%f\n", fa[i] = i);
  printf("print afp\n");
  for ( int i = 0 ; i < sizeof afp/sizeof afp[0] ; ++i ){
    afp[i] = &fa[i];
    printf("%f\n", *afp[i]);
  }
}

int main()
{
  f();
  return 0;
}
