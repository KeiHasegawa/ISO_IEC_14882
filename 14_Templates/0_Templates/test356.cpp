#include <stdio.h>

template<class...> struct S;

template<class C> struct S<C> : S<C, C> { C m; };

template<> struct S<int,int> {};

int main()
{
  S<int> x;
  printf("x.m = %d\n", x.m = 6789);
  return 0;
}

