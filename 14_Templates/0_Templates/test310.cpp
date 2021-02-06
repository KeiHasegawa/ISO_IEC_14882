#include <stdio.h>

template<class...> struct S1 {};

template<class C1, class... Cn>
struct S1<C1, Cn...> : S1<Cn...> {
  static const int V1 = sizeof(C1);
};

int main()
{
  printf("S1<char,int>::V1 = %d\n", S1<char,int>::V1);
  S1<char,int> x;
  printf("x.S1<int>::V1 = %d\n", x.S1<int>::V1);
  return 0;
}
