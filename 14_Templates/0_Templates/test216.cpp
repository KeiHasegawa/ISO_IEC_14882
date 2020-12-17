#include <stdio.h>

struct S1 {};

template<class> struct S2;

template<class C1> void f(C1 a, C1 b, S1)
{
  typename S2<C1>::T2 n = (b - a) >> 2;
  printf("n = %d\n", n);
}

template<class C3> void f(C3 a, C3 b)
{
  f(a, b, S1());
}

template<class C2> struct S2 {
  typedef C2 T2;
};

int main()
{
  f(1, 17);
  return 0;
}
