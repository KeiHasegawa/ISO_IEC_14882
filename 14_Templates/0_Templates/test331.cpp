#include <stdio.h>

template<bool V> struct S1 {
  static const bool V1 = V;
};

template<class C2> struct S2 : S1<__is_enum(C2)> {};

template<class C3, bool VV = S2<C3>::V1> struct S3 {
  static const bool V3 = VV;
};

enum E { a, b, c };

int main()
{
  if (S3<int>::V3)
    printf("error\n");
  else
    printf("ok\n");
  if (S3<E>::V3)
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
