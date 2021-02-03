#include <stdio.h>

template<class> struct S1 {
  static const bool V1 = false;
};

template<class C1> struct S1<C1 const> {
  static const bool V1 = true;
};

template<class C2, bool VV = S1<C2>::V1>
struct S2 {
  static const bool V2 = VV;
};

int main()
{
  if (S2<int>::V2)
    printf("error\n");
  else
    printf("ok\n");
  if (S2<const int>::V2)
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
