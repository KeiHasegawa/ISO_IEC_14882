#include <stdio.h>

template<class C1> void f(C1 a)
{
  printf("f(C1) called with %f\n", a);
}

template<class C2, int N> void f(C2 (&a)[N])
{
  printf("f(C2 (&a)[N]) called\n");
  for (int i = 0 ; i != N ; ++i)
    printf("%d ", a[i]);
  printf("\n");
}

int main()
{
  f(1.0);
  int a[] = { 1, 2, 3 };
  f(a);
  return 0;
}
