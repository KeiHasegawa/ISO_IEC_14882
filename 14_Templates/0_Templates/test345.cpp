#include <stdio.h>

template<class> struct S1;

template<class C1, int = S1<C1>::V1> struct S2;

template<class C2> struct S1 {
  static const int V1 = sizeof(C2);
};

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
