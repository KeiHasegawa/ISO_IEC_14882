#include <stdio.h>

template<class C1> struct S1 {
  static const int V1 = 5;
};

template<class C2, int N = S1<S1<C2>>::V1> struct S3 {
  C2 a[N];
};

template<class C3> struct S4 {
  S3<C3> m;
};

int main()
{
  S4<int> s;
  for (int i = 0 ; i != sizeof s.m.a/sizeof s.m.a[0] ; ++i)
    printf("%d ", s.m.a[i] = i);
  printf("\n");
  return 0;
}
