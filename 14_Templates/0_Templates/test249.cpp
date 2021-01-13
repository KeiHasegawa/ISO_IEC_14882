#include <stdio.h>

template<class...> struct CAT;

template<class C1, class C2, class C3> struct CAT<C1, C2, C3> {
  C1 c1;
  C2 c2;
  C3 c3;
};

template<class C4, class C5> struct S {
  C4 a;
  C5 b;
};

template<class C9, class... Cm>
using X = CAT<S<C9, Cm>...>;

int main()
{
  X<char, short, int, double> y;
  y.c1.a = 'x';
  y.c1.b = 12;
  printf("y.c1.a = '%c', y.c1.b = %d\n", y.c1.a, y.c1.b);
  y.c2.a = 'y';
  y.c2.b = 34;
  printf("y.c2.a = '%c', y.c2.b = %d\n", y.c2.a, y.c2.b);
  y.c3.a = 'z';
  y.c3.b = 56.0;
  printf("y.c3.a = '%c', y.c2.b = %f\n", y.c3.a, y.c3.b);
  return 0;
}
