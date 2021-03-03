#include <stdio.h>

void f(int (&a)[5])
{
  for (int i = 0 ; i != 5 ; ++i)
    printf("%d ", a[i]);
  printf("\n");
}

int main()
{
  int a[] = { 1, 2, 3, 4, 5 };
  f(a);
  return 0;
}
