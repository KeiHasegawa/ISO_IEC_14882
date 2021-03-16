#include <stdio.h>

template <class...> struct S1 {
  static const int V1 = 0;
};

template <class C1, class... Cn>
struct S1<C1, Cn...>
{
  static const int V1 =
    sizeof(C1) > S1<Cn...>::V1 ? sizeof(C1) : S1<Cn...>::V1;
};

template<int N3, int M3> struct S3 {
  typedef int T3[N3+M3];
};

template <int N1, class... Cm> struct S2 {
  using U = S1<Cm...>;
  static const int V2 = U::V1;
  typedef typename S3<N1, V2>::T3 T2;
};

template<int N2, class... Ck> const int S2<N2, Ck...>::V2;

int main()
{
  S2<3, char, short, int>::T2 x;
  printf("sizeof x/sizeof x[0] = %d\n", (int)(sizeof x/sizeof x[0]));
  return 0;
}
