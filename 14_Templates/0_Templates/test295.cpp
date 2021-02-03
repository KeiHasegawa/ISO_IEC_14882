#include <stdio.h>

template<bool V> struct S1 {
  static const bool V1 = V;
};

template<class> struct S2 : S1<false> {};

template<class C2> struct S2<C2 const> : S1<true> {};

template<class C3, bool VV = S2<C3>::V1>
struct S3 {
  static const bool V3 = VV;
};

struct X {};

int main()
{
  if (S3<X>::V3)
    printf("error\n");
  else
    printf("ok\n");
  if (S3<const X>::V3)
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
