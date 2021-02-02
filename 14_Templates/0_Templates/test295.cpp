#include <stdio.h>

template<bool V> struct S1 {
  static const bool V1 = V;
};

template<class> struct S2;

template<class C1> using U1 = typename S2<C1>::S2T;

template<class> struct S3 : S1<false> {};

template<class C2> struct S3<C2 const> : S1<true> {};

template<class, bool> struct S4 {
  typedef int T4;
};

template<class C4> struct S4<C4, true> {
  typedef C4 T4;
};

template<class C5, class C6, bool VV = S3<C5>::V1>
struct S5 {
  typedef S4<C6, VV> T54;
  typedef typename T54::T4 T5;
};

template<class C7> struct S6 { typedef C7 T6; };

template<class, bool> struct S7;

template<class C9> struct S7<C9, true> {
  using U2 = typename S6<U1<C9>>::T6;
  using U3 = typename S5<C9,U2>::T5;
};

template<class...> struct S8 {};

template<class C3> struct S7<C3, false> {
  using U4 = S8<int>;
  using U5 = typename S6<U4>::T6;
  using U6 = typename S5<C3,U5>::T5;
};

int main()
{
  S4<S8<int>,S3<S8<int>>::V1>::T4 x;
  printf("x = %d\n", x = 123);
  return 0;
}
