#include <stdio.h>

template<class...> struct S1;

template<> struct S1<> {};

template<class C1> struct S1<C1> : S1<C1, C1> {};

template<class C2, class... Cn> struct S2 : S1<typename C2::T2, Cn...> {};

struct X {
  typedef int T2;
};

template<> struct S1<int,int> {
  double m;
};

int main()
{
  S2<X> sx;
  printf("sx.m = %f\n", sx.m = 0.5);
  return 0;
}
