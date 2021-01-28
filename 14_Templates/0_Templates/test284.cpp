#include <stdio.h>

template<int V>
struct S1 {
  static const int V1 = V;
  typedef S1<V> T1;
};

template<int> struct S2;

template<class C1> struct S3 : S2<C1::V1>::T2 {};

template<class> struct S4;

template<class C2> using T5 = typename S4<C2>::T4;

template<class C3> struct S6 : S1<false> {};

template<class C4, class C5, int = S3<S6<C4>>::V1> struct S7 {
  typedef typename S6<C5>::T1 T7;
};

template<class C11, class C12> struct S8 : S7<C11, C12>::T7 {};

template<class C13, class C14> using T9 = S8<C14(*)[], C13(*)[]>;

template<int> struct S2 {
  struct T2 {
    static const int V1 = 10;
  };
};

template<class> struct S4 {
  struct T4 {
  };
};

int main()
{
  T9<int, double> x;
  printf("x.V1 = %d\n", x.V1);
  return 0;
}
