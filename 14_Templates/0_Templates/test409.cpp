#include <stdio.h>

template<class C, int N> void f(C (&a)[N])
{
  for (int i = 0 ; i != N ; ++i)
    printf("%d ", a[i]);
  printf("\n");
}

int main()
{
  int a[] = { 1, 2, 3 };
  f(a);
  return 0;
}
