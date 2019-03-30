#include <stdio.h>

int a;

int main()
{
  int a;
  a = 1;
  printf("%d\n",a);
  ::a = 2;
  printf("%d\n",::a);
  printf("%d\n",a);
  printf("%d\n",::a);
  return 0;
}
