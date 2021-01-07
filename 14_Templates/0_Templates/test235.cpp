#include <stdio.h>

template<class> struct S;

template<class C> using T2 = typename S<C>::T;

template<class C2> struct S {
  typedef C2 T;
};

int main()
{
  T2<int> t;
  printf("t = %d\n", t = 123);
  return 0;
}
