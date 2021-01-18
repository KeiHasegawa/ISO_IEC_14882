#include <stdio.h>

template<class> struct S1;

template<class C1, int N = S1<C1>::V> struct S2 {
  C1 a[N];
};

template<class C1> struct S1 {
  static const int V = 10;
};

int main()
{
  typedef int X;
  S2<X> x;
  for (int i = 0 ; i != sizeof x.a/sizeof x.a[0] ; ++i) {
    printf("%d ", x.a[i] = S1<X>::V - i);
  }
  printf("\n");
  return 0;
}
