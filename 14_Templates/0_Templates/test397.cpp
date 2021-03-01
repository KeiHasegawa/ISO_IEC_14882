#include <stdio.h>

struct Tx {};

constexpr int f(Tx)
{
  return 5;
}

struct Ty {};

constexpr int f(Ty)
{
  return 10;
}

template<int N> struct S1 {
  static const int V1 = N;
};

template<class C1> struct S2 : S1<f(typename C1::T1{})> {
};

struct X {
  typedef Tx T1;
};

struct Y {
  typedef Ty T1;
};

int main()
{
  printf("S2<X>::V1 = %d\n", S2<X>::V1);
  printf("S2<Y>::V1 = %d\n", S2<Y>::V1);
  return 0;
}
