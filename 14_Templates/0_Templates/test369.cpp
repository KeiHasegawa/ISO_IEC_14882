#include <stdio.h>

template<class C> struct S {
  static C V;
};

template<class C> C S<C>::V;

template<int N, class C> struct S<C[N]> {
  static C V;
};

template<int N, class C> C S<C[N]>::V;

int main()
{
  printf("S<double>::V = %f, S<double[5]>::V = %f\n",
	 S<double>::V = 1, S<double[5]>::V = 2);
  return 0;
}
