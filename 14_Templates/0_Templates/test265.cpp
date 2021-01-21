#include <stdio.h>

template<class C1, C1 v> struct S1 {
  static const C1 V1 = v;
};

template<class> struct S2 {
  static const int V2 = 1;
};

template<class C3> struct S3 : S1<bool, (S2<C3>::V2 > 0)> {
  C3 c3;
};

int main()
{
  S3<int> x;
  x.c3 = 123;
  if (S3<int>::V1)
    printf("ok\n");
  else
    printf("error\n");
  printf("x.c3 = %d\n", x.c3);
  return 0;
}
