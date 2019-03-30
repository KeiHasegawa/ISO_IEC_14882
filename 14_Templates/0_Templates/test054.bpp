#include <stdio.h>

template<class C> struct S {
  enum { N = 5 };
  static int s[N];
};

template<class C> int S<C>::s[N];

int main()
{
  for ( int i = 0 ; i < S<int>::N ; ++i )
    printf("S<int>::s[%d] = %d\n", i, S<int>::s[i] = i);
  return 0;
}
