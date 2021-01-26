#include <stdio.h>

void f(int a)
{
  printf("a = %d\n", a);
}

int main()
{
  f({123});
  return 0;
}

