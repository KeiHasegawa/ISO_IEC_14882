#include <stdio.h>

template<bool, class C1> struct S2 { typedef C1 T2; };

template <class C2> struct S3 { typedef C2 T3; };

template<class C3, class C4> struct S4 : S2<C3::V1, C4>::T2 {};

template<class C5, class C6> struct S5 {
  typedef typename S2<C5::V1, C6>::T2::T1 T5;
};

template<class C7> struct S6 : S4<C7, C7>::T1 {};

template<class C8> struct S7 : S6<C8> {};

struct X {
  static const bool V1 = false;
  typedef X T1;
};

struct Y {
  static const bool V1 = true;
  typedef Y T1;
};

int main()
{
  if (S7<X>::V1)
    printf("error\n");
  else
    printf("ok\n");
  if (S5<Y,Y>::T5::V1)
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
