#include <stdio.h>

template<class C, int N = alignof(C)> struct S {
  static const int V = N;
};

int main()
{
  S<int> x;
  printf("S<char>::V = %d\n", S<char>::V);
  printf("S<int>::V = %d\n", S<int>::V);
  return 0;
}
