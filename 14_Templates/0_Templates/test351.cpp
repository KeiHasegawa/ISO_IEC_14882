#include <stdio.h>

template<bool V> struct S1 {
  static constexpr bool V1 = V;
};

template<class> struct S2 {
  static const bool V2 = false;
};

template<class C1> struct S3 : S1<S2<C1>::V2> {};

template<class C2, bool = S3<C2>::V1> struct S4 {
  typedef C2 T4;
};

int main()
{
  S4<int>::T4 x;
  printf("x = %d\n", x = 5678);
  return 0;
}
