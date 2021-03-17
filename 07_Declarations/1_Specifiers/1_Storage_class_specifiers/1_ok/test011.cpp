#include <stdio.h>

int f()
{
  return 1;
}

int main()
{
  if (auto n = f())
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
