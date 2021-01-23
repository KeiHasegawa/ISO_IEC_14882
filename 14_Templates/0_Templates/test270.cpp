#include <stdio.h>

template<class> struct S1 {};

template<class C2, int N = S1<S1<C2>>::V1> struct S2 {
  C2 a[N];
};

template<class C3> struct S3 {
  S2<C3> m;
};

template<> struct S1<S1<int>> {
  static const int V1 = 5;
};

int main()
{
  S3<int> s;
  for (int i = 0; i != sizeof s.m.a/sizeof s.m.a[0] ; ++i)
    printf("%d ", s.m.a[i] = i);
  printf("\n");
  return 0;
}
