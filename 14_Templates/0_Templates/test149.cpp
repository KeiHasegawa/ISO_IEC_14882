#include <stdio.h>

template<class A, class B> struct S {
  A a;
  B b;
  S()
  {
    a = 1;
    b = 'a';
  }
  template<class BB> S(const S<A,BB>& s)
  {
    a = s.a + 1;
    b = s.b + 2;
  }
};

int main()
{
  S<int,char> sic;
  printf("sic.a = %d, sic.b = '%c'\n", sic.a, sic.b);
  S<int,double> sdc = sic;
  printf("sdc.a = %d, sdc.b = %f\n", sdc.a, sdc.b);
  return 0;
}
