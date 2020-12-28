#include <stdio.h>

template<class C1, C1 v> struct S {
  static constexpr C1 V = v;
};

template<class C2, C2 v> constexpr C2 S<C2, v>::V;

int main()
{
  printf("S<int, 3>::V = %d\n", S<int, 3>::V);
  printf("S<char, 'c'>::V = %c\n", S<char, 'c'>::V);
  return 0;
}
