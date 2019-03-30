#include <stdio.h>

int a;

int* b;

int* pa[] = { 0, &a, b, 0 };

int main()
{
  if ( pa[0] == 0 )
    printf("ok\n");
  else
    printf("error\n");

  if ( pa[1] == &a )
    printf("ok\n");
  else
    printf("error\n");

  if ( pa[2] == b )
    printf("ok\n");
  else
    printf("error\n");

  if ( pa[3] == 0 )
    printf("ok\n");
  else
    printf("error\n");

  return 0;
}
