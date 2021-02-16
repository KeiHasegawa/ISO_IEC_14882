#include <stdio.h>

template<class...> struct S1;

template<class C1> struct S1<C1> { C1 m; };

template<class C2, class... Cn> struct S1<C2,Cn...> : S1<C2> {};

int main()
{
  S1<char, int, double> x;
  printf("x.m = '%c'\n", x.m = 'a');
  return 0;
}
