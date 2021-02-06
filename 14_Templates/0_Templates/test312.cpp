#include <stdio.h>

template<class...> struct S1 {};

template<class C1, class... Cn>
struct S1<C1, Cn...> : S1<Cn...> {
  static const int V1 = sizeof(C1);
};

template<int N1, class C2, bool = (N1 <= C2::V1)> struct S2;

template<int N2, class C3, class... Cm>
struct S2<N2, S1<C3, Cm...>, true> {
  C3 a;
};

template<int N3, class C4, class... Ck>
struct S2<N3, S1<C4, Ck...>, false> : S2<N3, S1<Ck...>> {
  C4 b;
};

int main()
{
  S2<1,S1<char,int>,false> x;
  printf("x.b = '%c', x.a = %d\n", x.b = 'a', x.a = 456);
  return 0;
}
