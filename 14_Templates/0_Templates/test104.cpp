#include <stdio.h>

template<class A, class B> struct S {
  A a;
  B b;
  S()
  {
    a = 1;
    b = 'a';
  }
  template<class AA> S(const S<AA,B>& s)
  {
    a = s.a + 1;
    b = s.b + 2;
  }
};

int main()
{
  S<int,char> sic;
  printf("sic.a = %d, sic.b = '%c'\n", sic.a, sic.b);
  S<double,char> sdc = sic;
  printf("sdc.a = %f. sdc.b = '%c'\n", sdc.a, sdc.b);
  return 0;
}
