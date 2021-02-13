#include <stdio.h>

template <typename...> struct S {
  static const int V1 = 0;
  static const int V2 = 0;
};

template <typename C1, typename... Cn> struct S<C1, Cn...> {
  static const int V1 =
    alignof(C1) > S<Cn...>::V1 ? alignof(C1) : S<Cn...>::V1;
  static const int V2 =
    sizeof(C1) > S<Cn...>::V2 ? sizeof(C1) : S<Cn...>::V2;
};

int main()
{
  printf("S<char>::V1 = %d\n", S<char>::V1);
  printf("S<short>::V2 = %d\n", S<short>::V2);
  printf("S<int>::V1 = %d\n", S<int>::V1);
  printf("S<char,short,int>::V2 = %d\n", S<char,short,int>::V2);
  return 0;
}
