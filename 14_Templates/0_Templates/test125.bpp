#include <stdio.h>

template<int N> struct S {
  int a[N];
};

template<int N> void f(S<N> sn)
{
  printf("N = %d\n", N);
  for ( int i = 0 ; i < N ; ++i ){
    printf("sn.a[%d] = %d\n", i, sn.a[i] = i);
  }
}

int main()
{
  S<3> s3;
  f(s3);
  return 0;
}
