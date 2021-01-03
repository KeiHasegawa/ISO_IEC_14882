#include <stdio.h>

template<int> struct S1;

template<class C> struct S2 : S1<C::V> {};

template<int N> struct S1 {
  char a[N];
};

struct X {
  static const int V = 3;
};

int main()
{
  S2<X> s2x;
  s2x.a[0] = 'a';
  s2x.a[1] = 'b';
  s2x.a[2] = '\0';
  printf("s2x.a = \"%s\"\n", s2x.a);
  return 0;
}
