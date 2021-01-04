#include <stdio.h>

template<class> struct S1;

template<class...> struct S2;

template<class C1> struct S2<C1> : S1<C1> {};

template<class C2> struct S1 {
  C2 m;
}; 

int main()
{
  S2<int> s2;
  printf("s2.m = %d\n", s2.m = 456);
  return 0;
}
