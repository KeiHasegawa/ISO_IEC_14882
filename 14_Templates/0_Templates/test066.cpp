#include <stdio.h>

template<class C> struct outer {
  enum { N = 5 };
  static int a[N];
};

template<class C> int outer<C>::a[outer<C>::N];

void f(int* p, int n)
{
  for ( int i = 0 ; i < n ; ++i )
    printf("p[%d] = %d\n", i, p[i] = i);
}


int main()
{
  f(&outer<float>::a[0],outer<float>::N);
  return 0;
}
