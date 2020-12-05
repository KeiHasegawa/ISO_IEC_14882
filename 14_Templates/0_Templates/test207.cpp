#include <stdio.h>

template<bool, class> struct S1 {};

template<class C1> struct S1<true, C1> { typedef C1 T1; };

template<class C2> struct S2 {
  enum { V };
};

template<> struct S2<int> {
  enum { V = 1 };
};

template<class C3> typename S1<!S2<C3>::V, void>::T1 f(const C3& a)
{
  printf("a.m = %d\n", a.m);
}

template<class C4> typename S1<S2<C4>::V, void>::T1 f(const C4& a)
{
  printf("a = %d\n", a);
}

struct T {
  int m;
};

int main()
{
  f(1);

  T t;
  t.m = 2;
  f(t);

  return 0;
}
