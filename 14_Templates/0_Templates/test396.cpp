#include <stdio.h>

struct T {};

constexpr int f(T)
{
  return 5;
}

template<int N> struct S1 {
  int a[N];
};

template<class C1> struct S2 : S1<f(typename C1::T1{})> {
};

struct X {
  typedef T T1;
};

int main()
{
  S2<X> sx;
  for (int i = 0 ; i != sizeof sx.a/sizeof sx.a[0] ; ++i)
    printf("%d ", sx.a[i] = i);
  printf("\n");
  return 0;
}
