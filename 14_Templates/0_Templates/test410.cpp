#include <stdio.h>

template<class C1, int N1>  void f(C1 (&a)[N1], C1 (&b)[N1])
{
  for (int i = 0 ; i != N1 ; ++i)
    printf("%d %d ", a[i], b[i]);
  printf("\n");
}

int main()
{
  int a[] = { 1, 2, 3 };
  int b[] = { 4, 5, 6 };
  f(a, b);
  return 0;
}
