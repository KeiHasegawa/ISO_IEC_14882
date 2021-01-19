#include <stdio.h>

template<class> struct S1;

template<class C1, int N = S1<C1>::V> struct S2 {
  C1 a[N];
};

template<class C2> struct S1 {
  static const int V = 10;
};

int main()
{
  typedef double X;
  S2<X> s;
  for (int i = 0 ; i != S1<X>::V; ++i)
    s.a[i] = S1<X>::V - i;
  for (int i = 0 ; i != S1<X>::V; ++i)
    printf("%f ", s.a[i]);
  printf("\n");
  return 0;
}
