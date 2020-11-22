#include <stdio.h>

template<bool, class C1> struct S1 {
  typedef C1 T1;
};

template<class> struct S2 {
  enum { V = 0 };
};

template<class C3> struct S3 {
  C3 m;
};

template<class C> typename S1<S2<C>::V, S3<C> >::T1 f(C);

int main()
{
  f(5);
  return 0;
}

template<class C> typename S1<S2<C>::V, S3<C> >::T1 f(C c)
{
  printf("c = %d\n", c);
  S3<C> x;
  x.m = c + 1;
  printf("x.m = %d\n", x.m);
  return x;
}
