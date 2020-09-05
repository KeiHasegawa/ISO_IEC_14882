#include <stdio.h>

template<class> struct S1 {
  int i1;
  double d1;
};

template<int> struct S2 {
  char c2;
  float f2;
};

int main()
{
  S1<char> s1c;
  s1c.i1 = 1;
  s1c.d1 = 2.0;
  S2<5> s25;
  s25.c2 = '3';
  s25.f2 = 4.0;
  printf("%d %f %c %f\n", s1c.i1, s1c.d1, s25.c2, s25.f2);
  return 0;
}
