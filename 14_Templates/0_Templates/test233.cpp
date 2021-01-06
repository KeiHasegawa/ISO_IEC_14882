#include <stdio.h>

template<class C1, C1 V1> struct S1 {
  static constexpr C1 V = V1;
};

template<bool V2> using X = S1<bool, V2>;

template<class C2> struct S2 : X<!bool(C2::V)> {};

struct Y1 {
  static const int V = 3;
};

struct Y2 {
  static const char V = '\0';
};

int main()
{
  S2<Y1> s2;
  if (s2.V)
    printf("error 1\n");
  else
    printf("ok 1\n");
  if (S2<Y2>::V)
    printf("ok 2\n");
  else
    printf("error 2\n");
  return 0;
}
