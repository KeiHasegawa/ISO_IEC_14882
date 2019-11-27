#include <stdio.h>

template<class C> struct outer {
  struct inner {
    C mem;
  };
  static int a[sizeof(inner)];
};

template<class C> int outer<C>::a[sizeof(outer<C>::inner)];

void f(int* p, int n)
{
  for ( int i = 0 ; i < n ; ++i )
    printf("p[%d] = %d\n", i, p[i] = i);
}

int main()
{
  f(&outer<char>::a[0],sizeof(outer<char>::inner));
  f(&outer<double>::a[0],sizeof(outer<double>::inner));
  return 0;
}
