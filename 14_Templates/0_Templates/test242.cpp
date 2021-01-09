#include <stdio.h>

template<class> struct S1;

template<class C1, C1 V1> struct S2 {
  static constexpr C1 V = V1;
};

template<class C2> struct S3 : S2<bool, !S1<C2>::V> { };

template<class C3> struct S1 {
  static const int V = C3::V;
};

struct X {
  static const int V = 256;
};

struct Y {
  static const int V = 0;
};

int main()
{
  S3<X> sx;
  if (sx.V)
    printf("error\n");
  else
    printf("ok\n");
  if (S3<Y>::V)
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
