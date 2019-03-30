#include <stdio.h>

template<int N> void f()
{
  int a[N];
  for ( int i = 0 ; i < N ; ++i )
    a[i] = i;
  for ( int i = 0 ; i < N ; ++i )
    printf("a[%d] = %d\n", i, a[i]);
}

int main()
{
  f<3>();
  f<4>();
  return 0;
}
