#include <stdio.h>

template<bool V> struct S1 {
  static const bool V1 = V;
};

template<class C1> struct S2 {
  static const bool V2 = false;
};

template<class C2> struct S3 {
  static const bool V3 = false;
};

template<class C3> struct S3<C3 const> {
  static const bool V3 = true;
};

template<class C4> struct S4 : S1<S3<const C4>::V3> {};

template<class C5, bool = S2<S4<C5>>::V2> struct S5 {
  struct T5 {
    C5 m;
  };
};

template<class C6> struct S6 : S5<C6>::T5 {};

int main()
{
  S6<int> x;
  printf("x.m = %d\n", x.m = 456);
  return 0;
}
