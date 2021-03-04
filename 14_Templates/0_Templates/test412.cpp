#include <stdio.h>

template<class C1, int N1>  void f(C1 (&a)[N1], C1 (&b)[N1]);

template<class C2, int N2>  void f(C2 (&a)[N2], C2 (&b)[N2])
{
  for (int i = 0 ; i != N2 ; ++i)
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
