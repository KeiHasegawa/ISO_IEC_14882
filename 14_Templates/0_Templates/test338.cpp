#include <stdio.h>

template <class...> struct S {
  static const int V = 0;
};

template <class C1, class... Cn> struct S<C1, Cn...> {
  static const int V = alignof(C1) > S<Cn...>::V ? alignof(C1) : S<Cn...>::V;
};

int main()
{
  printf("S<char>::V = %d\n", S<char>::V);
  printf("S<short>::V = %d\n", S<short>::V);
  printf("S<int>::V = %d\n", S<int>::V);
  printf("S<char,short,int>::V = %d\n", S<char,short,int>::V);
  return 0;
}
