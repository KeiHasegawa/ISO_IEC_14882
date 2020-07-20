#include <stdio.h>
#include <string.h>

template<class C> struct S {
  typename C::X x;
};

template<class C2> struct S2 {
  S<C2> s;
};

struct S3 {
  struct X {
    double m;
  };
};

struct S4 {
  typedef char X[5];
};

int main()
{
  S2<S3> s23;
  printf("s23.s.x.m = %f\n", s23.s.x.m = 0.5);
  S2<S4> s24;
  strcpy(s24.s.x, "C++");
  printf("s24.s.x = %s\n", s24.s.x);
  return 0;
}
