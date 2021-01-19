#include <stdio.h>

template<class> struct S1;

template<class C1, int N = S1<C1>::V> struct S2 {
  C1 a[N];
};

template<class C2> struct S3 {
  S2<C2> m;
};

template<class C2> struct S1 {
  static const int V = 10;
};

int main()
{
  typedef double X;
  S3<X> s;
  for (int i = 0 ; i != S1<X>::V; ++i)
    s.m.a[i] = S1<X>::V - i;
  for (int i = 0 ; i != S1<X>::V; ++i)
    printf("%f ", s.m.a[i]);
  printf("\n");
  return 0;
}
