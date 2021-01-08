#include <stdio.h>

template<class C1, C1 V1> struct S1 {
  static constexpr C1 V = V1;
  typedef S1<C1, V1> T;
};

template<bool V2> using X = S1<bool, V2>;

template<class C2> struct S2 : X<!bool(C2::V)> {};

template<class C3> struct S3 : S2<C3>::T {};

struct Y1 {
  static const bool V = false;
};

struct Y2 {
  static const bool V = true;
};

int main()
{
  S3<Y1> sy1;
  if (sy1.V)
    printf("ok\n");
  else
    printf("error\n");
  if (S3<Y2>::V)
    printf("error\n");
  else
    printf("ok\n");
  return 0;
}

