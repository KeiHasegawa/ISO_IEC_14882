#include <stdio.h>

template<class C1, C1 V1> struct S1 {
  static constexpr C1 V = V1;
  typedef S1<C1, V1> T;
};

template<class C2> struct S2 : S1<bool, !bool(C2::V)> {};

struct Y1 {
  static const bool V = false;
};

struct Y2 {
  static const bool V = true;
};

int main()
{
  S2<Y1> sy1;
  if (sy1.V)
    printf("ok\n");
  else
    printf("error\n");
  if (S2<Y2>::V)
    printf("error\n");
  else
    printf("ok\n");
  return 0;
}

