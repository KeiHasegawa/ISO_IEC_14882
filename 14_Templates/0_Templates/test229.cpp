#include <stdio.h>

template<int, class> struct S1;

template<class...> struct S2;

template<class C1> struct S2<C1> : S1<C1::V, C1>::T {};


template<int N, class C2> struct S1 {
  C2 a[N];
  struct T {
    int m;
  };
};

struct X {
  static const int V = 5;
};

int main()
{
  S2<X> s2x;
  printf("s2x.m = %d\n", s2x.m = 123);
  return 0;
}
