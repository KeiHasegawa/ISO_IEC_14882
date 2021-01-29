#include <stdio.h>

template<int N, int M = N> struct S {
  int a[N];
  double b[M];
};

int main()
{
  S<3> s;
  for (int i = 0 ; i != sizeof s.a/sizeof s.a[0] ; ++i)
    printf("%d ", s.a[i] = i);
  printf("\n");
  for (int i = 0 ; i != sizeof s.b/sizeof s.b[0] ; ++i)
    printf("%f ", s.b[i] = i+10);
  printf("\n");
  return 0;
}
