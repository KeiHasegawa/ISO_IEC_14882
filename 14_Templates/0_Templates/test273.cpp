#include <stdio.h>

template<bool V> struct S1 {
  static constexpr bool V1 = V;
};

template<bool VV> struct S2 {
  static const bool V2 = VV;
};

template<class C1, class C2> struct S3 {
  S2<C1::V1> m1;
};

template<class C3, class C4> struct S4 {};

template<class C5, class C6>
struct S5 : S3<S1<true>, S4<C5, C6>> {};

template<class C7, bool> struct S6;

template<class C8> struct S6<C8, true> {
  S5<C8&, const C8&> m2;
};

int main()
{
  S6<int, true> s6;
  if (s6.m2.m1.V2)
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
