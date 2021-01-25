#include <stdio.h>

template<bool V>
struct S1 {
  static const bool V1 = V;
};

template<class C1, class C2> struct S2 : S1<true> {};

template<class C3, bool = S1<true>::V1> struct S3;

template<class C4> struct S3<C4, true> {
  S2<C4&, const C4&> s2;
};

template<class C4> struct S4 {
  S3<C4> s3;
};

int main()
{
  S4<int> s4;
  if (s4.s3.s2.V1)
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
