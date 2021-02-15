#include <stdio.h>

template<int...> struct fact;

template<> struct fact<0> {
  static const int V = 1;
  int operator()(){ return V; }
};

template<int N> struct fact<N> : fact<N-1> {
  static const int V = N * fact<N-1>::V;
  int operator()(){ return V; }
};

int main()
{
  printf("fact<5>::V = %d\n", fact<5>::V);
  fact<6> x;
  printf("x() = %d\n", x());
  printf("fact<7>()() = %d\n", fact<7>()());
  return 0;
}
