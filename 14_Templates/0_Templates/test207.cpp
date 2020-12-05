#include <stdio.h>

template<bool, class> struct enable {};

template<class C1> struct enable<true, C1> { typedef C1 T; };

template<class C2> struct scalar {
  enum { V };
};

template<> struct scalar<int> {
  enum { V = 1 };
};

template<class C3> typename enable<!scalar<C3>::V, void>::T f(const C3& a)
{
  printf("a.m = %d\n", a.m);
}

template<class C4> typename enable<scalar<C4>::V, void>::T f(const C4& a)
{
  printf("a = %d\n", a);
}

struct X {
  int m;
};

int main()
{
  f(1);

  X x;
  x.m = 2;
  f(x);

  return 0;
}
