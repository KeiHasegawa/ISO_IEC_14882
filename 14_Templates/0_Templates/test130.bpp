#include <stdio.h>

template<int N> struct S {};

template<int N> bool operator==(const S<N>&, const S<N>&)
{
  printf("operator==(const S<N>&, const S<N>&) called\n");
  return true;
}

template<class C> struct S2 {};

template<class C> bool operator==(const S2<C>&, const S2<C>&)
{
  printf("operator==(const S2<C>&, const S2<C>&) called\n");
  return true;
}

int main()
{
  S2<int> x;
  x == x;
  return 0;
}

