#include <stdio.h>

template<class C1> struct S1 {
  typedef C1 T1;
};

template<class, bool> struct S2;

template<class C2> struct S2<C2, false> {
  typedef typename S1<C2>::T1 T2;
};

int main()
{
  S2<int, false>::T2 x;
  printf("x = %d\n", x = 5678);
  return 0;
}
