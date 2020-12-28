#include <stdio.h>

template<class C1, C1 v> struct S {
  static const C1 V = v;
};

template<class C2, C2 v> const C2 S<C2, v>::V;

int main()
{
  printf("S<int, 3>::V = %d\n", S<int, 3>::V);
  printf("S<char, 'c'>::V = %c\n", S<char, 'c'>::V);
  printf("S<double, 4.0>::V = %f\n", S<double, 4.0>::V);
  return 0;
}
