#include <stdio.h>

template<class, class> struct BASE {};

template<class...> struct CAT;

template<class C1> struct CAT<C1> {
  C1 c1;
};

template<class C2, class C3> struct S1 {
  C2 c2;
  C3 c3;
};

template<class C4, class... Cn>
using X = CAT<S1<C4, Cn>...>;

template<class C5> struct S2 { typedef C5 T2; };

int main()
{
  X<S2<double>::T2, char> x;
  x.c1.c2 = 1.0;
  x.c1.c3 = 'b';
  printf("x.c1.c2 = %f, x.c1.c3 = '%c'\n", x.c1.c2, x.c1.c3);
  return 0;
}
