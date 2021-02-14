#include <stdio.h>

template<bool V> struct S1 {
  static const bool V1 = V;
};

template<class> struct S2;

template<class C1> struct S3 : S1<!S2<C1>::V2> {};

template<class C2> struct S4 { typedef C2 T4; };

template<class C3, bool = S3<C3>::V1> struct S5;

template<class C4> struct S6 {
  typedef typename S4<C4>::T4 ST4;
  typedef typename S5<ST4>::T5 T6;
};

template<class C5> struct S2 {
  static const bool V2 = false;
};

template<class C6, bool> struct S5 {
  typedef C6 T5;
};

int main()
{
  S6<int>::T6 x;
  printf("x = %d\n", x = 5678);
  return 0;
}
