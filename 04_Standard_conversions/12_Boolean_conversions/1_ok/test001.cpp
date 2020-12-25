#include <stdio.h>

bool f(int a)
{
  return a;
}

int main()
{
  int a = 1;
  if (f(a << 8))
    printf("ok\n");
  else
    printf("error\n");

  return 0;
}
