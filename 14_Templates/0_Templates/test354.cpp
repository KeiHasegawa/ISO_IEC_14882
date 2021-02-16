#include <stdio.h>

template<bool V> struct S1 {
  static const bool V1 = V;
};

template<class...> struct S2;

template<> struct S2<> : S1<true> {};

template<class C1> struct S2<C1> : C1 {};

int main()
{
  if (S2<S1<true>>::V1)
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
