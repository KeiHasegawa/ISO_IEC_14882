#include <stdio.h>

template<class C1> struct S { typedef C1 T; };

template<class C2> using X = typename S<C2>::T;

int main()
{
  X<int> x;
  printf("x = %d\n", x = 456);
  return 0;
}
