#include <stdio.h>

template<class...> using X = int;

template<class C1, class = void> struct S {
  C1* c1;
};

template<class C2> struct S<C2, X<C2&>> {
  C2 c2;
};

int main()
{
  S<int> x;
  int n = 1;
  x.c1 = &n;
  S<int, X<int&>> y;
  y.c2 = 2;
  S<int, void> z;
  int m = 3;
  z.c1 = &m;
  S<int, int> xx;
  xx.c2 = 4;
  printf("*x.c1 = %d, y.c2 = %d, *z.c1 = %d, xx.c2 = %d\n",
	 *x.c1, y.c2, *z.c1, xx.c2);
  return 0;
}
