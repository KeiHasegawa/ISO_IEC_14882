#include <stdio.h>

template<class...> struct S1 {};

template<class C1, class... Cn>
struct S1<C1, Cn...> : S1<Cn...> {
  static const int V1 = sizeof(C1);
};

template<int N1, class C2, bool = (N1 <= C2::V1)> struct S2;

template<int N2, class C3, class... Cm>
struct S2<N2, S1<C3, Cm...>, true> {
  C3 m;
};

int main()
{
  S2<1,S1<int>,true> x;
  printf("x.m = %d\n", x.m = 456);
  return 0;
}
