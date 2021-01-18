#include <stdio.h>

template<bool v> struct S1 {
  static const bool V = v;
};

template<class C2,  bool> struct S2 {};

template<class C3> struct S2<C3, true> : S1<C3(-1) < C3(0)> {};

int main()
{
  if (S2<int, true>::V)
    printf("ok\n");
  else
    printf("error\n");
  if (S2<unsigned int, true>::V)
    printf("error\n");
  else
    printf("ok\n");
  return 0;
}
