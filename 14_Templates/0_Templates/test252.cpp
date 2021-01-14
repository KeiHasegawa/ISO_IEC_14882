#include <stdio.h>

template<class...> struct S;

template<class C1> struct S<C1> : C1 {};

template<class, class> struct S2;

template<class C2, class... Cn> using X = S<S2<C2, Cn>...>;

template<class C3, class C4> struct S2 {
  C3 c3;
  C4 c4;
};

template<class C5, class C6> struct S<C5, C6> {
  C5 c5;
  C6 c6;
};

struct Y {
  char m[10];
};

int main()
{
  X<Y, int, double> x;
  x.c5.c3.m[0] = 'a';
  x.c5.c3.m[1] = 'b';
  x.c5.c3.m[2] = 'c';
  x.c5.c3.m[3] = '\0';
  x.c5.c4 = 1;
  x.c6.c3.m[0] = 'd';
  x.c6.c3.m[1] = 'e';
  x.c6.c3.m[2] = 'f';
  x.c6.c3.m[3] = '\0';
  x.c6.c4 = 2.0;
  printf("x.c5.c3.m = \"%s\", x.c5.c4 = %d\n", x.c5.c3.m, x.c5.c4);
  printf("x.c6.c3.m = \"%s\", x.c6.c4 = %f\n", x.c6.c3.m, x.c6.c4);
  return 0;
}
