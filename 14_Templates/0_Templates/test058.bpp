#include <stdio.h>

template<class C> struct S {
  static int si;
  static int sa[10];
};

template<class C> int S<C>::si = 0;

template<class C> int S<C>::sa[10];

void f(int* a, int n)
{
  for ( int i = 0 ; i < n ; ++i )
    printf("a[%d] = %d\n", i, a[i] = i);
}

int main()
{
  printf("%d\n", S<int>::si = 123);
  f(S<float>::sa, 10);
  return 0;
}
