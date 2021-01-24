#include <stdio.h>

template<bool V> struct S1 {
  static constexpr bool V1 = V;
};

template<bool VV> struct S2 {
  static const bool V2 = !VV;
};

template<class C1> struct S3 {
  S2<C1::V1> m1;
};

struct S5 {
  S3<S1<true>> x;
};

int main()
{
  S5 s5;
  if (s5.x.m1.V2)
    printf("error\n");
  else
    printf("ok\n");
  return 0;
}
