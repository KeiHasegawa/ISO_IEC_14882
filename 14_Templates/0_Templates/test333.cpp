#include <stdio.h>

template<class C1> struct S1 {
  static const int V1 = sizeof(C1);
};

template<class C2, int N2, bool V = (N2 <= S1<C2>::V1)> struct S2 {
  static const bool V2 = V;
};

int main()
{
  if (S2<char, 1>::V2)
    printf("ok\n");
  else
    printf("error\n");
  return 0;
}
