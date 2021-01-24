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

struct S5 : S3<S1<true>> {};

int main()
{
  S5 s;
  if (s.m1.V2)
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
