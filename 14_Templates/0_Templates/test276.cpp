#include <stdio.h>

template<bool V> struct S1 {
  static constexpr bool V1 = V;
};

template<bool VV> struct S2 {
  static const bool V2 = VV;
};

template<class C1> struct S3 {
  S2<C1::V1> m1;
};

template<class C7, bool> struct S6;

template<class C8> struct S6<C8, true> {
  S3<S1<true>> m2;
};

int main()
{
  S6<int,true> s;
  if (s.m2.m1.V2)
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
