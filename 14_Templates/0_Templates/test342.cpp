#include <stdio.h>

template <class...> struct S1 {
  static const int V1 = 0;
};

template <class C1, class... Cn>
struct S1<C1, Cn...>
{
  static const int V1 =
    sizeof(C1) > S1<Cn...>::V1 ? sizeof(C1) : S1<Cn...>::V1;
};

template <int N1, class... Cm> struct S2 {
  using U = S1<Cm...>;
  static const int V2 = N1 > U::V1 ? N1 : U::V1;
};

int main()
{
  printf("S2<1, char, short, int>::V2 = %d\n", S2<1, char, short, int>::V2); ;
  printf("S2<2, char, short, int>::V2 = %d\n", S2<2, char, short, int>::V2); ;
  printf("S2<4, char, short, int>::V2 = %d\n", S2<4, char, short, int>::V2); ;
  printf("S2<16, char, short, int>::V2 = %d\n",
	 S2<16, char, short, int>::V2); ;
  return 0;
}
