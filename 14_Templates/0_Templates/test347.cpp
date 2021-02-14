#include <stdio.h>

template<class C1> struct S1 {
  static const int V1 = sizeof(C1) * 3;
};

template<class C2> struct S2 {
  static const int V2 = sizeof(C2);
};

template<class C3, int = (S1<C3>::V1 / S2<C3>::V2 + S2<C3>::V2)> struct S3;


template<class C4, int N1> struct S3 {
  static const int V3 = N1;
};

int main()
{
  printf("S3<int>::V3 = %d\n", S3<int>::V3);
  return 0;
}
