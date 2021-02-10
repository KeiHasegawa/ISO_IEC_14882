#include <stdio.h>

template<class C1> struct S1 {
  typedef C1 T1;
};

template<class C2> struct S2 {
  typedef S1<C2> ST1;
  typedef typename ST1::T1 T2;
};

template<class...> struct S3 {};

template<class C3, class... Cn>
struct S3<C3, Cn...> : S3<Cn...> {
  static const int V3 = sizeof(C3);
};

template<int N1, class C4, bool = (N1 <= C4::V3)> struct S4;

template<int N2, class C5, class... Cm>
struct S4<N2, S3<C5, Cm...>, true> {
  using U7 = C5;
};

template<int N3, class C6, class... Ck>
struct S4<N3, S3<C6, Ck...>, false> : S4<N3, S3<Ck...>> {};

template<class C7> struct S5 {
  using U1 = S3<unsigned char, unsigned short, unsigned int, unsigned long>;
  using U2 = typename S4<sizeof(C7), U1>::U7;
  using U3 = typename S2<C7>::T2;
};

int main()
{
  using U4 = S5<int>::U3;
  U4 x;
  printf("x = %d\n", x = 789);
  return 0;
}
