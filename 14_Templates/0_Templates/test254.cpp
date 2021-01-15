#include <stdio.h>

template<class...> using X = void;

template<class C1, class = void> struct S {
  C1* c1;
};

template<class C2> struct S<C2, X<C2&>> {
  C2 c2;
};

int main()
{
  S<int> x;
  x.c2 = 1;
  S<int, X<int&>> y;
  y.c2 = 2;
  S<int, void> z;
  z.c2 = 3;
  S<int, int> xx;
  int n = 4;
  xx.c1 = &n;
  printf("x.c2 = %d, y.c2 = %d, z.c2 = %d, *xx.c1 = %d\n",
	 x.c2, y.c2, z.c2, *xx.c1);
  return 0;
}
