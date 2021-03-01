#include <stdio.h>

struct T {};

constexpr int f(T)
{
  return 5;
}

template<int N> struct S1 {
  static const int V1 = N;
};

template<class C1> struct S2 : S1<f(typename C1::T1{})> {
};

template<class C2> using U = S2<C2>;

struct X {
  typedef T T1;
};

int main()
{
  printf("U<X>::V1 = %d\n", U<X>::V1);
  return 0;
}
