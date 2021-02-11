#include <stdio.h>

template<class C1> struct S1 {
  static const int V1 = sizeof(C1);
};

template<class C2, int N2 = S1<C2>::V1> struct S2 {
  C2 a[N2];
};

int main()
{
  S2<double> x;
  for (int i = 0 ; i != sizeof x.a/sizeof x.a[0] ; ++i)
    printf("%f ", x.a[i] = i+10);
  printf("\n");

  S2<char> y;
  for (int i = 0 ; i != sizeof y.a/sizeof y.a[0] ; ++i)
    printf("'%c' ", y.a[i] = 'a' + i);
  printf("\n");
  return 0;
}
