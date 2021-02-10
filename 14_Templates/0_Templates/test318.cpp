#include <stdio.h>

template<class C1> struct S1 {
  using U1 = C1;
};

template<class C2> struct S2 {
  using U2 = typename S1<C2>::U1;
};

int main()
{
  S2<int>::U2 x;
  printf("x = %d\n", x = 789);
  return 0;
}
