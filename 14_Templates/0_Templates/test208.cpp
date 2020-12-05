#include <stdio.h>

template<bool, class> struct enable {};

template<class C1> struct enable<true, C1> { typedef C1 T; };

template<class C2> struct scalar {
  enum { V };
};

template<> struct scalar<int> {
  enum { V = 1 };
};

template<class C4> typename enable<scalar<C4>::V, void>::T f(const C4& a)
{
  printf("a = %d\n", a);
}

int main()
{
  f(1);
  return 0;
}
