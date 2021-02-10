#include <stdio.h>

template<class C1> struct S1 {
  typedef C1 T1;
};

template<class C2> using U1 = typename S1<C2>::T1;

template<class C3> struct S2 { typedef C3 T2; };

template<class C4, class C5> struct S3 {
  typedef S2<C5> S25;
  typedef typename S25::T2 T3;
};

template<class, bool, bool> struct S4;

template<class C6> struct S4<C6, true, false> {
  using U2 = typename S2<U1<C6>>::T2;
  using U3 = typename S3<C6, U2>::T3;
};

int main()
{
  S4<int, true, false>::U2 x;
  printf("x = %d\n", x = 1234);
  S4<int, true, false>::U3 y;
  printf("y = %d\n", y = 5678);
  return 0;
}
