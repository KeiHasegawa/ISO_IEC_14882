#include <stdio.h>

template<class C1, C1 V1> struct S1 {
  static constexpr C1 V = V1;
};

template<class C2, class C3> struct S2 : S1<C2, !C3::V> {};

struct X {
  static const int V = 3;
};

struct Y {
  static const int V = 0;
};

int main()
{
  S2<int, X> six;
  if (six.V)
    printf("error\n");
  else
    printf("ok\n");

  if (S2<bool, Y>::V)
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}

