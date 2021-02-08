#include <stdio.h>

template<class...> struct S1 {
  double a;
};

template<class C1, class... Cn>
struct S1<C1, Cn...> : S1<Cn...> {
  static const int V1 = sizeof(C1);
};

int main()
{
  S1<char, short, int> x;
  printf("x.V1 = %d\n", x.V1);
  printf("x.S1<short, int>::V1 = %d\n", x.S1<short, int>::V1);
  printf("x.S1<int>::V1 = %d\n", x.S1<int>::V1);
  printf("x.a = %f\n", x.a = 0.5);
  return 0;
}
