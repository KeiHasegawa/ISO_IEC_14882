#include <stdio.h>

template<typename C1> C1 f()
{
}

template<class C2, class C3> struct S {
  typedef C2 C3::* PM;
  typedef decltype(f<PM>()) T;
};

struct X {
  int m;
};

int main()
{
  X x;
  S<int, X>::T pm = &X::m;
  printf("x.*pm = %d\n", x.*pm = 5789);
  return 0;
}
