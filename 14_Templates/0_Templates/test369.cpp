#include <stdio.h>

template<class...> struct S;

template<class C> struct S<C> {
  static C V;
};

template<class C> C S<C>::V;

int main()
{
  printf("S<double>::V = %f\n", S<double>::V = 1234);
  return 0;
}

