#include <stdio.h>

template<class T1, class T2 = T1> struct S;

template<class S1, class S2> struct S {
  S1 s1;
  S2 s2;
};

void f()
{
  S<int> sii;
  sii.s1 = 1;
  sii.s2 = 2;
  printf("%d %d\n", sii.s1, sii.s2);
}

void g()
{
  S<double, char> sdc;
  sdc.s1 = 3.0;
  sdc.s2 = '4';
  printf("%f %c\n", sdc.s1, sdc.s2);
}

int main()
{
  f();
  g();
  return 0;
}
