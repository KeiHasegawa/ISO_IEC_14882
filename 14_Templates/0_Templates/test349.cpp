#include <stdio.h>

template<class... Cn> struct S {
  static const int V = 123;
};

template<class... Cm> const int S<Cm...>::V;

int main()
{
  printf("S<int>::V = %d\n", S<int>::V);
  return 0;
}
