#include <stdio.h>

template<int V>
struct S1 {
  static const int V1 = V;
};

template<class C1> struct S2;

template<class C3> struct S3 {
  typedef C3 T3;
  static const int V3 = 5;
};

template<class C4> struct S4 : S1<S3<const C4>::V3> {};

template<class C5, class C6, int = S2<S4<C6>>::V2>
struct S5 {
  typedef typename S3<C6>::T3 T5;
};

template<class C7, class C8> struct S5<C7, C8, 10> {
};

template<class C5, class C6> struct S6 : S5<C5,C6>::T5 {};

template<class C1> struct S2 {
  static const int V2 = 5;
};

struct X {
  int x;
};

int main()
{
  S6<int,X> s6;
  s6.x = 1;
  printf("s6.x = %d\n", s6.x);
  return 0;
}
