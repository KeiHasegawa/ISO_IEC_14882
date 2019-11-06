#include <stdio.h>

template<int C> struct S {
  static int s;
};

template<int C> int S<C>::s = C + 10;

int main()
{
  printf("S<1>::s = %d\n", S<1>::s);
  printf("S<3>::s = %d\n", S<3>::s);
  printf("S<5>::s = %d\n", S<5>::s);
  return 0;
}
