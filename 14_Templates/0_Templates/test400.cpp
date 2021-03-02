#include <stdio.h>

template<bool, class C2> struct S2 { typedef C2 T2; };

template<class C3> struct S3 {
  typedef typename S2<C3::V1, C3>::T2::T1 T3;
};

struct X {
  static const bool V1 = true;
  typedef int T1;
};

int main()
{
  S3<X>::T3 t3;
  printf("t3 = %d\n", t3 = 5678);
  return 0;
}
