#include <stdio.h>

template<class> struct S1;

template<class C1> using X = typename S1<C1>::T1;

template<class C2> struct S2 {
  typedef C2 T2;
};

template<class C3> struct S3 : S2<X<C3>>::T2 {};

template<class C1> struct S1 {
  typedef C1 T1;
};

struct Y {
  int m;
};

int main()
{
  S3<Y> sy;
  printf("sy.m = %d\n", sy.m = 123);
  return 0;
}
