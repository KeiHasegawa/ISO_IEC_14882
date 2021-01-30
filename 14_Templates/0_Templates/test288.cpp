#include <stdio.h>

typedef int T;

struct S1 {
  template<T N1, class C1, bool B = (N1 <= C1::V1)> struct S2;
};

struct X {
  static const int V1 = 5;
};

template<T N2, class C2, bool B2> struct S1::S2 {
  static const bool V2 = B2;
};

int main()
{
  S1::S2<2,X> x;
  if (x.V2)
    printf("ok\n");
  else
    printf("error\n");
  S1::S2<6,X> y;
  if (y.V2)
    printf("error\n");
  else
    printf("ok\n");
  return 0;
}
