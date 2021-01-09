#include <stdio.h>

template<class C1, C1 V1>
struct S1 {
  static constexpr C1 V = V1;
  typedef S1<C1, V1> T;
};

template<class C2> struct S2 : S1<bool, !bool(C2::V)> {};

template<class C3> struct S3 {
  static const int V = C3::V;
};

template<class> struct S4 {};

template<class C4, class C5> struct S4<C4 C5::*> : S2<S3<C4>>::T {
  C4 c4;
  C5 c5;
};

struct X1 {
  static const int V = 3;
  int m1;
};

struct Y1 {
  X1 x1;
};

struct X2 {
  static const int V = 0;
  double m2;
};

struct Y2 {
  X2 x2;
};

int main()
{
  S4<X1 Y1::*> sxy1;
  sxy1.c4.m1 = 1;
  sxy1.c5.x1.m1 = 2;
  if (sxy1.V)
    printf("error\n");
  else
    printf("ok\n");
  printf("sxy1.c4.m1 = %d, sxy1.c5.x1.m1 = %d\n", sxy1.c4.m1, sxy1.c5.x1.m1);
  S4<X2 Y2::*> sxy2;
  sxy2.c4.m2 = 3.0;
  sxy2.c5.x2.m2 = 4.0;
  if (S4<X2 Y2::*>::V)
    printf("ok\n");
  else
    printf("error\n");
  printf("sxy2.c4.m2 = %f, sxy2.c5.x2.m2 = %f\n", sxy2.c4.m2, sxy2.c5.x2.m2);
  return 0;
}
