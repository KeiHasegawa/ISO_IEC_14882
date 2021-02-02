#include <stdio.h>

template<bool V> struct S1 {
  static const bool V1 = V;
};

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

template<class> struct S8 {};

int main()
{
  S5<S8<int>,S8<int>>::T5 x;
  printf("x = %d\n", x = 123);
  return 0;
}
