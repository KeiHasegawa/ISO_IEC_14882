#include <stdio.h>

template<bool V>
struct S1 {
  static const bool V1 = V;
};

template<bool VV> const bool S1<VV>::V1;

template<bool VVV> struct S2 {
  static const bool V2 = VVV;
};

template<class C1> struct S3 {
  S2<C1::V1> s2;
};

template<class C5, bool> struct S4;

template<class C6> struct S4<C6, true> {
  S3<S1<true>> s3;
};

int main()
{
  S4<int,true> s4;
  if (s4.s3.s2.V2)
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
