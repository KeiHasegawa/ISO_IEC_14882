#include <stdio.h>

template<bool, class> struct enable {};

template<class C1> struct enable<true, C1> { typedef C1 T; };

template<class C2> struct scalar {
  enum { V };
};

template<class C3> typename enable<!scalar<C3>::V, void>::T f(const C3& a)
{
  printf("a.m = %d\n", a.m);
}

struct X {
  int m;
};

int main()
{
  X x;
  x.m = 2;
  f(x);
  return 0;
}
