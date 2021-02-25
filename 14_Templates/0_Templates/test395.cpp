#include <stdio.h>

template<bool VV> struct S1 {
  static const bool V1 = VV;
};

template<class C1> struct S2 : S1<typename C1::T1{}> {};

struct X {
  typedef bool T1;
};

struct Y {
  struct T1 {
    constexpr operator bool() const { return true; }
  };
};

int main()
{
  if (S2<X>::V1)
    printf("error\n");
  else
    printf("ok\n");
  if (S2<Y>::V1)
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
