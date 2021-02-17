#include <stdio.h>

template<class...> struct S1;

template<> struct S1<> {};

template<class C1> struct S1<C1> : S1<C1, C1> {};

template<class C2, class C3, class... Cn>
struct S1<C2, C3, Cn...> : S1<C2, C3> {};

template<class C4, class... Cn> struct S2 : S1<typename C4::T4, Cn...> {};

struct X {
  typedef int T4;
};

template<> struct S1<int,int> {
  char a[10];
};

int main()
{
  S2<X> sx;
  sx.a[0] = 'a';
  sx.a[1] = 's';
  sx.a[2] = 'd';
  sx.a[3] = 'f';
  sx.a[4] = '\0';
  printf("sx.a = \"%s\"\n", sx.a);
  return 0;
}
