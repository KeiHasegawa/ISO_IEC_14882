#include <stdio.h>

template<class C1> struct S1 {
  static const int sci = C1(1);
  const C1* ptr;
};

template<class C2> struct S2 {
  S1<C2> m;
};

int main()
{
  S2<char> s2c;
  s2c.m.ptr = "xyz";
  printf("%d %s\n", s2c.m.sci, s2c.m.ptr);
  return 0;
}
