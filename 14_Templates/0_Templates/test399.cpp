#include <stdio.h>

template<class C1> struct S1 {
  struct T1;
};

template<class C2> struct S2 : S1<C2>::T1 {};

template<class C3> struct S3 : S2<C3> {};

template<> struct S1<int> {
  struct T1 {
    int m;
  };
};

int main()
{
  S3<int> x;
  printf("x.m = %d\n", x.m = 1234);
  return 0;
}
