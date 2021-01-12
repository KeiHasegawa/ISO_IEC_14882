#include <stdio.h>

template<class C1, class C2> struct BASE {
  C1 c1;
  C2 c2;
};

template<class...> struct CAT;

template<class C1, class C2> struct CAT<C1, C2> {
  C1 a;
  C2 b;
};

template<class C1, class C2, class C3, class... Cn>
struct CAT<C1, C2, C3, Cn...> : BASE<C1, CAT<C2, C3, Cn...>> {};

int main()
{
  CAT<char, int, double> s;
  s.c1 = '1';
  s.c2.a = 2;
  s.c2.b = 3.0;
  printf("s.c1 = '%c', s.c2.a = %d, s.c2.b = %f\n", s.c1, s.c2.a, s.c2.b);
  return 0;
}
