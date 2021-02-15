#include <stdio.h>

template<class... Cn> struct S {
  static int V;
};

template<class... Cm> int S<Cm...>::V;

int main()
{
  printf("S<int>::V = %d\n", S<int>::V = 123);
  return 0;
}
