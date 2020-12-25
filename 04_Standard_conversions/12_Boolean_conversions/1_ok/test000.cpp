#include <stdio.h>

bool f(void* p)
{
  return p;
}

int main()
{
  int a;

  if (f(&a))
    printf("ok\n");
  else
    printf("error\n");

  return 0;
}
