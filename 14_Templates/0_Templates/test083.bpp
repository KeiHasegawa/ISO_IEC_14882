#include <stdio.h>

struct T {
  int t;
  T()
  {
    printf("T::T called\n");
  }
};

template<class C> struct S {
  static T s;
};

template<class C> T S<C>::s;

int main()
{
  printf("main called\n");
  printf("S<int>::s.t = %d\n", S<int>::s.t = 1);
  return 0;
}
