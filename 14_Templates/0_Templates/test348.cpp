#include <stdio.h>

template<class C1> struct S1 {
  static const int V1 = sizeof(C1);
};

template<class C2, int = S1<C2>::V1> struct S2;

template<class, int> struct S2;

template<class C3, int N1> struct S2 {
  C3 a[N1];
};

int main()
{
  S2<int> x;
  for (int i = 0 ; i != sizeof x.a/sizeof x.a[0] ; ++i)
    printf("%d ", x.a[i] = i+1);
  printf("\n");
  return 0;
}
