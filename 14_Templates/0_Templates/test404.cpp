#include <stdio.h>

template<bool, class C1> struct S2 { typedef C1 T2; };

template <class C2> struct S3 { typedef C2 T3; };

template<class C3, class C4 = C3&&> C4 f1(int);

template<class C5> auto declval() -> decltype(f1<C5>(0));

struct S4 {
  template<class C6, class C7> static
  S3<decltype(declval<C7>().*declval<C6>())> sf(int);
};

template<class C8, class C9> struct S5 : S4 {
  typedef decltype(sf<C8, C9>(0)) T7;
};

struct X {};

double f() { return -0.5; }

int main()
{
  S5<double X::*, X>::T7::T3 x = f();
  printf("x = %f\n", x);
  return 0;
}
