#include <stdio.h>

template<class...> struct S1;

template<> struct S1<> { int a; };

template<class C1> struct S1<C1> : S1<C1, C1> { C1 b; };

template<class> struct S2 {};

template<class C2, class C3, class C4 = S2<C2>, class C5 = S2<C3>>
 struct S3 { using U3 = S1<C4, C5>; };

template<class C6, class C7> struct S1<C6, C7> : S3<C6, C7>::U3 {};

template<> struct S1<char, char> {};

struct X { double c; };

template<> struct S3<char, int> {
  typedef X U3;
};

int main()
{
  S1<> x;
  printf("x.a = %d\n", x.a = 1);
  S1<char> y;
  printf("y.b = '%c'\n", y.b = '2');
  S1<char, int> z;
  printf("z.c = %f\n", z.c = 3.0);
  return 0;
}
