#include <stdio.h>

template<class C> struct S {
  enum { N = 5 };
  static int a[N];
};

template<class C> int S<C>::a[N];

void f(int* a, int n)
{
  for ( int i = 0 ; i < n; ++i )
    printf("a[%d] = %d\n", i, a[i] = i);
}

int main()
{
  f(S<int>::a, S<int>::N);
  f(S<float>::a, S<float>::N);
  return 0;
}
