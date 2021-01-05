#include <stdio.h>

template<class C1> struct S1 {
  C1 m1;
};

template<class...> struct S2;

template<> struct S2<> {
  int m2;
};

template<class C1, class... Cn> struct S2<C1, Cn...> : S1<S2<Cn...>> {
  C1* m3;
};

int main()
{
  S2<int> s2;
  int a = 123;
  s2.m3 = &a;
  s2.m1.m2 = 456;
  printf("*s2.m3 = %d s2.m1.m2 = %d\n", *s2.m3, s2.m1.m2);
  return 0;
}
