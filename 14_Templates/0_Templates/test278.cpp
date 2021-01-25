#include <stdio.h>

template<bool V>
struct S1 {
  static const bool V1 = V;
};

template<bool> struct S2;

template<class C1>
struct S3 : S2<C1::V1> {};

template<class C2, class C3>
struct S4 {
  S3<S1<__is_assignable(C2, C3)>> s3;
};

template<class, bool> struct S5;

template<class C4> struct S5<C4, true> {
  S4<C4&, const C4&> s4;
};

template<bool VV> struct S2 {
  static const bool V2 = VV;
};

int main()
{
  S5<int,true> s5;
  if (s5.s4.s3.V2)
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
